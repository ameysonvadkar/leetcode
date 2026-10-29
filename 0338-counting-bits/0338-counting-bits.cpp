class Solution {
    private:
        int f(int num) {
            int cnt = 0;
            
            while (num) {
                num = num & (num-1);
                cnt++;
            }

            return cnt;
        }

    public:
        vector<int> countBits(int n) {
            vector<int> res;

            for (int i=0; i<=n; i++) {
                res.push_back(f(i));
            }

            return res;
        }
};