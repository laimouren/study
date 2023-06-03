#include <string>
#include <map>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        for (int i = 0; i < s.size(); ++i) {
            if (help1.find(s[i]) == help1.end()) {
                help1[s[i]] = t[i];
            }
            if (help2.find(t[i]) == help2.end()) {
                help2[t[i]] = s[i];
            }
            if (help1[s[i]] != t[i] || help2[t[i]] != s[i]) {
                return false;
            }
        }

        return true;
    }
private:
    map<char, char> help1;
    map<char, char> help2;
};