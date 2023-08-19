#include <string>
#include <algorithm>
using std::string;
class Solution {
public:
    string reverseLeftWords(string s, int n) {
        string res;
        for(int i = 0; i < s.size(); ++i) {
            res.append(1, s[(i + n) % s.size()]);
        }
        return res;
    }


    string reverseLeftWords2(string s, int n) {
        std::reverse(s.begin(), s.begin() + n);
        std::reverse(s.begin() + n, s.end());
        std::reverse(s.begin(), s.end());

        return s;
    }
};