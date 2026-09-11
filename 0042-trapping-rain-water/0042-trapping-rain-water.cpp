class Solution {
    public:
        int trap(vector<int>& height) {
            int n = height.size();
            int left = 0, right = n-1;
            int lMax, rMax, res = 0;

            while (left < right) {
                if (height[left] <= height[right]) {
                    if (lMax > height[left]) res += lMax - height[left];
                    else lMax = height[left];
                    left++;
                }
                else {
                    if (rMax > height[right]) res += rMax - height[right];
                    else rMax = height[right];
                    right--;
                }
            }

            return res;
        }
};