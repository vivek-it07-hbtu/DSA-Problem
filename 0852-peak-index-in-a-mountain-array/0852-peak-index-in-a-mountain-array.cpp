class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        // 1 3 5 4 2 1 0
        int n = nums.size();
        int idx=-1;
        for(int i=1;i<=n-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
            idx=i;
            break;
            }
        }
    return idx;
    }
};