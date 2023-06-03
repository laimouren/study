class Solution {
public:
    int mySqrt(int x) {

        for (long i = 0; i <= x / 2 + 1; i++)
        {
            if (i * i <= x && (i + 1) * (i + 1) > x) {
                return i;
            }
        }

        return -1;
    }
};