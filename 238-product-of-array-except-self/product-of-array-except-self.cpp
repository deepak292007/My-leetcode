class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> right(n, 1);

        // Suffix products
        int pro = 1;
        for (int i = n - 1; i >= 0; i--) {
            pro *= nums[i];
            right[i] = pro;
        }

        vector<int> ans(n);
        int left = 1;

        // Calculate result using left and right products
        for (int i = 0; i < n; i++) {
            int rightProduct = (i == n - 1) ? 1 : right[i + 1];

            ans[i] = left * rightProduct;

            left *= nums[i];
        }

        return ans;
    }
};