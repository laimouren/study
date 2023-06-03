#include <vector>
using std::vector;
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        backtracking(candidates, 0, target, 0);

        return res;
    }
    void backtracking(const vector<int>& candidates, int sum, int target, int index) {
        if (sum == target) {
            res.emplace_back(tmp);
            return;
        } else if (sum > target) {
            return;
        }

        for (int i = index; i < candidates.size(); i++) {
            sum += candidates[i];
            tmp.emplace_back(candidates[i]);
            backtracking(candidates, sum, target, i);
            sum -= candidates[i];
            tmp.pop_back();
        }

    }
private:
    vector<vector<int>> res;
    vector<int> tmp;
};