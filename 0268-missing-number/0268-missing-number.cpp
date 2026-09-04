class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Method 1 : using basics math but interviewer reject you
        int n=nums.size();
        // int actualsum=0;
        // for(int i=0;i<n;i++){
        //     actualsum+=nums[i];
        // }
        // int sum=n*(n+1)/2;
        // int missingnumber= (sum-actualsum);
        // return missingnumber;

        // Mehtod 2 : Optimal solution
        //a ^ a = 0       a ^ 0 = a
        // int ans = n;
        // for (int i = 0; i < n; i++) {
        //     ans ^= i;
        //     ans ^= nums[i];
        // }
        // return ans;

        //cyclic Sort
        int i = 0;
        while(i<n){
            int correctIdx=nums[i];
            if(i==correctIdx || nums[i]==n) i++;
            else swap(nums[i],nums[correctIdx]);
        }
        for(int i=0; i<n; i++){
            if(nums[i]!=i) return i;
        }
        return n;
    }

};