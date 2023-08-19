#include <vector>
#include <algorithm>
using std::vector;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int res = 0;
        while (left <= right)
        {
            int area = (right - left) * std::min(height[right], height[left]);
            res = std::max(area, res);

            if (height[right] > height[left]) {
                left++;
            } else if (height[right] == height[left]) {
                if (right - 1 > left && height[right - 1] < height[left + 1]) {
                    right--;
                } else {
                    left++;
                }
            } else {
                right--;
            }

        }
        return res;
    }
};