class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        int ans = -1;

        for (int i = 0; i < n; i++) {
            count = 0;

            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }

            if (arr[i] == count) {
                ans = max(ans, arr[i]);
            }
        }

        return ans;
    }
};