class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // int low = 1;
        // int high = nums.size() - 1;

        // while (low < high) {

        //     int mid = (low + high) / 2;

        //     int count = 0;

        //     // Count numbers less than or equal to mid
        //     for (int num : nums) {
        //         if (num <= mid)
        //             count++;
        //     }

        //     if (count > mid) {
        //         high = mid;      // Duplicate is in the left half
        //     } else {
        //         low = mid + 1;   // Duplicate is in the right half
        //     }
        // }

        // return low;

        //cyclic sort se 
        int n = nums.size();
        int i=0;
        while(i<n){
            int correctIdx = nums[i];
            if(nums[correctIdx]==nums[i]) return nums[i];
            else swap(nums[i],nums[correctIdx]); 
        }
        return 100;
    }
};