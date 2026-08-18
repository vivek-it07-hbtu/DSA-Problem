class Solution {
public:

    bool cansplit(vector<int> &nums,int k, long maxsum){
        int groupsneeded=1;
        int currsum=0;
        for(int num : nums){
            if(currsum+num>maxsum){
                groupsneeded++;
                currsum=num;
                if(groupsneeded>k) return false;
            }else{
                currsum+=num;
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        
        int low=0;
        int high=0;
        for(int i=0;i<nums.size();i++){
            low = max(low,nums[i]);
            high += nums[i];
        }
        while(low<=high){
            int mid = (high-low)/2+low;
            if(cansplit(nums,k,mid)){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};