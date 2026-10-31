class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {

        int mx = nums[0];
        int currSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] < nums[i]) {
                currSum += nums[i];
            } else {
                mx = max(mx, currSum);
                currSum = nums[i];
            }
        }

        mx = max(mx, currSum);
        return mx;
    }
};