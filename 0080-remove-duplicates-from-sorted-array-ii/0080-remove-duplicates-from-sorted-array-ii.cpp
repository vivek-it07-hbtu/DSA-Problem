class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return n;
        int i=2;
        // i = 2 because the first two elements are always allowed.
        // We start checking from the 3rd element (index 2).
        // j also starts from index 2 because we compare every new element
        // with the element at (i - 2). If they are different, we keep it.
        for(int j=2;j<n;j++){
            if(nums[j] != nums[i-2]){
                nums[i]=nums[j];
                i++;
            }
        }
        return i;

    }
};