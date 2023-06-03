#include <vector>
using std::vector;
#include <unordered_map>
using std::unordered_map;
#include <algorithm>
using std::abs;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); ++i) {
            if (map.find(nums[i]) != map.end()) {
                if (i - map[nums[i]] <= k) {
                    return true;
                }
            }
            /* 反复刷新最后一次的索引位置 */
            map[nums[i]] = i;
        }
        return false;
    }
};