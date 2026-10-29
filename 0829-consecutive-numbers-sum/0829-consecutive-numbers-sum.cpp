class Solution {
    public:
        int consecutiveNumbersSum(int n) {
            int cnt = 0;

            for (int k=1; (k * (k+1) / 2) <= n; k++) {
                long long remaining = n - ((k * (k-1)) / 2);
                if (remaining % k == 0) cnt++; 
            }

            return cnt;
        }
};