#include <vector>
#include <set>
#include <algorithm>
using std::vector;
using std::set;
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int res = -1;
        for (auto tmp : nums) {
            if (help.find(-tmp) != help.end()) {
                // cout << tmp << endl;
                int val = std::abs(tmp);
                res = res > val ? res : val; 
            } else {
                help.emplace(tmp);
            }
        }

        return res;
    }
    int findMaxK2(vector<int>& nums) {
        int res = -1;
        std::sort(nums.begin(), nums.end());
        int l = 0, r = nums.size() - 1;
        while (l < r)
        {
            if (-nums[l] < nums[r]) {
                r--;
            } else if (-nums[l] == nums[r]) {
                res = res > nums[r] ? res : nums[r];
                l++;
                r--;
            } else {
                l++;
            }
        }
        
        return res;
    }
private:
    set<int> help;
};