#include <vector>
using std::vector;
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> vec;
        vector<int> number;
        for (int i = 1; i <= n; i++) {
            number.emplace_back(i);
        }
        backTracking(vec, k, number, -1);

        return res;
    }
    void backTracking(vector<int>& vec, int k, vector<int>& number, int index) {
        if (k == 0) {
            res.emplace_back(vec);
            return;
        }
        for (int i = index + 1; i < number.size(); i++) {
            if (number[i] == -1) {
                continue;
            }
            int tmp = number[i];
            number[i] = -1;
            vec.emplace_back(tmp);
            backTracking(vec, k - 1, number, i);
            vec.pop_back();
            number[i] = tmp;
        }

    }
private:
    vector<vector<int>> res;
};