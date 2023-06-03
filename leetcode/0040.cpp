#include <vector>
#include <algorithm>
using std::vector;
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        std::sort(candidates.begin(), candidates.end());
        backtracking(candidates, target, 0, -1);

        return res;
    }
    void backtracking(const vector<int>& candidates, int target, int sum, int index) {
        if (target < sum) {
            return;
        }

        if (target == sum) {
            res.emplace_back(tmp);
            return;
        }

        for (int i = index + 1; i < candidates.size(); i++) {
            sum += candidates[i];
            tmp.emplace_back(candidates[i]);
            backtracking(candidates, target, sum, i);
            sum -= candidates[i];
            tmp.pop_back();
            while (i < candidates.size() - 1 && candidates[i] == candidates[i + 1]) {
                i++;
            }
        }
    }

private:
    vector<vector<int>> res;
    vector<int> tmp;
};