class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Method 1 : 
        int n=nums.size();
        int actualsum=0;
        for(int i=0;i<n;i++){
            actualsum+=nums[i];
        }
        int sum=n*(n+1)/2;
        int missingnumber= (sum-actualsum);
        return missingnumber;
    }
};