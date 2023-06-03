#include<vector>
using std::vector;
class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        if (n < k) {
            return res;
        }

        backtracking(k, n, 0, 10);
        return res;
    }

    void backtracking(int k, int n, int sum,int number) {
        if (k == 0) {
            if (sum == n) {
                res.emplace_back(total);
            }
            return;
        }

        for (int i = number - 1; i > 0; i--) {
            if (sum + i <= n) {
                total.emplace_back(i);
                backtracking(k - 1, n, sum + i, i);
                total.pop_back();
            } 
            
        }


    }
private:
    vector<vector<int>> res;
    vector<int> total;
};