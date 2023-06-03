#include <vector>
using std::vector;
#include <string>
using std::string;
using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if (nums.size() == 0) {
            return res;
        }
        string help;
        int64_t number = nums[0];
        int index = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (i != 0 && nums[i] != number + 1) {
                if (index != i - 1) {
                    help += "->";
                    
                    help += to_string(number);
                }
                res.emplace_back(help);
                help.clear();
            }
            number = nums[i];
            if(help.empty()){
                help += to_string(number);
                index = i;
            }
            
        }
        if (index != nums.size() - 1) {
            help += "->";
            help += to_string(number);
        }
        res.emplace_back(help);
        return res;
    }
};