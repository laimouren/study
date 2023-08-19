#include <vector>
using std::vector;
class Solution {
public:
    int trap1(vector<int>& height) {
        int res = 0;
        int max = 0;
        /* 找出最高有多少层 */
        for (int i = 0; i < height.size(); ++i) {
            if (height[i] > max) {
                max = height[i];
            }
        }

        /* 从第一层开始逐层遍历 */
        for (int i = 1; i <= max; i++) {
            int tmp = 0;
            bool has = false;
            /* 遍历整个数组，出现比当前层数小的就加一，否则就更新res */
            for (int j = 0; j < height.size(); j++) {
                if (height[j] < i && has) {
                    tmp++;
                } 
                if (height[j] >= i) {
                    res += tmp;
                    tmp = 0;
                    has = true;
                }
            }
        }
        return res;
    }

    int trap2(vector<int>& height) {
        
    }
};