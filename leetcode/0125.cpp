#include <string>
using std::string;
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        for (auto c : s) {
            if (isalnum(c)) {
                help.push_back(tolower(c));
            }
        }
        int left = 0, right = help.size() - 1;
        while (left < right){
            if (help[left++] != help[right--]) {
                return false;
            }
        }
        return true;
    }

private:
    string help;
};