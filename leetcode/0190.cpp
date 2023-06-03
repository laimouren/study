#include <cstdint>
#include <iostream>
using namespace std;
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev = 0;
        for (int i = 0; i < 32 && n > 0; ++i) {
            rev |= (n & 1) << (31 - i);
            n >>= 1;
        }
        return rev;
    }
};

int main(int argc, char argv[]) {
    Solution solution;
    std::cout << solution.reverseBits(10) << endl;

}