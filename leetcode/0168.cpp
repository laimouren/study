#include <string>
#include <iostream>
#include <algorithm>
using std::string;
using namespace std;
class Solution {
public:
    static string convertToTitle(int columnNumber) {
        string res;
        int number = (columnNumber - 1) % 26;
        int tmp = 0;
        while (columnNumber > 0) {
            res.push_back('A' + number);
            columnNumber = (columnNumber - 1) / 26;
            number = (columnNumber - 1) % 26;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main(int argc, char* argv[]) {
    // std::cout <<(char)('A' + 2147483647 % 26) << endl; 
    std::cout << Solution::convertToTitle(701) << endl;
    return 0;
}