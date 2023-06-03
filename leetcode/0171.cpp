#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
using std::string;
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
        for (int i = columnTitle.size() - 1; i >= 0; i--) {
            res += (columnTitle[i] - 'A' + 1) * pow(26, columnTitle.size() - 1 - i); 
        }

        return res;
    }
};