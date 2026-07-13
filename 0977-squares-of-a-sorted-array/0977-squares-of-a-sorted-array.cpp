class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector <int> ans(n);
        //using two pointer approach
        int i=0;
        int j=n-1;
        int k=n-1;//last index se element fill krenge 

        while(i<=j){
            if(nums[i]*nums[i]>nums[j]*nums[j]){
                ans[k]=nums[i]*nums[i];
                i++;
            }
            else {
                ans[k]=nums[j]*nums[j];
                j--;
            }
            k--;
        }
        return ans;
        
    }
};