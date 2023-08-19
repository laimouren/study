#include <vector>
#include <algorithm>
using std::vector;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }

        int res = 0;
        std::sort(nums.begin(), nums.end());
        int num = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0 || nums[i] == nums[i - 1] + 1) {
                num++;
            } else if (nums[i] == nums[i - 1]){
                continue;
            }else {
                res = std::max(num, res);
                num = 1;
            }
        }
        res = std::max(num, res);
        return res;
    }
};