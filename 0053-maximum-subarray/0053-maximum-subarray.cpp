class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int currSum = nums[0];
        int maxSum = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            
            int v1 = currSum + nums[i];
            int v2 = nums[i];

            currSum = max(v1, v2);
            maxSum = max(maxSum, currSum);
        }

        return maxSum;
    }
};