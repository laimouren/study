class Solution {
public:
    int addDigits(int num) {
        while (num >= 10)
        {
            int tmp = num;
            int count = 0;
            while (tmp >= 10) {
                count += tmp % 10;
                tmp /= 10;
            }
            count += tmp;
            num = count;
        }
        return num;
    }
};