#include <string>
using std::string;
class Solution {
public:
    string addBinary(string a, string b) {
        // 保证a的长度大于等于b的长度
        if (a.size() < b.size()) {
            return addBinary(b, a);
        }
        int i = b.size() - 1;
        int j = a.size() - 1;
        int number = 0;
        while (i >= 0) {
            int tmp = b[i--] - '0';
            number = a[j] - '0' + tmp + number;
            a[j--] = number % 2 + '0';
            number = number / 2;
        }
        if (number != 0) {
            while (j >= 0 && number != 0)
            {
                number = a[j] - '0' + number;
                a[j--] = number % 2 + '0';
                number = number / 2;
            }
            if (number != 0) {
                a.insert(a.begin(), '1');
            }
        }

        return a;
    }
};