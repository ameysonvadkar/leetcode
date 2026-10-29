class Solution {
    public:
        int countTriplets(vector<int>& arr) {
            int n = arr.size(), cnt = 0;

            for (int i=0; i<n; i++) {
                int xr = 0;
                
                for (int k=i; k<n; k++) {
                    xr = xr ^ arr[k];

                    if (xr == 0) cnt += k - i;
                }
            }

            return cnt;
        }
};