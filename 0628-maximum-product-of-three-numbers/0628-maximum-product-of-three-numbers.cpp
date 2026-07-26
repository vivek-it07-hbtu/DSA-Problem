class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int n = nums.size();
    //kyokii sort hone ke baad jitna bhi bde element h wo last me ho jaayenge aurrr
    // jitne bhi bhi minimum waale h wo starting me aa jaayene
    //isiliye pehle last 3 ka product nikale h
    //aur baad me starting ke 3 product nikalenge ho skta h 2 bde negative element ho jinka product bahut bada posititve number bne isiliye  
        int product1 = nums[n-1] * nums[n-2] * nums[n-3];
        int product2 = nums[0] * nums[1] * nums[n-1];

        return max(product1, product2);
    }
};