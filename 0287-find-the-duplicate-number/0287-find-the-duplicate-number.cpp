class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int low = 1;
        int high = nums.size() - 1;

        while (low < high) {

            int mid = (low + high) / 2;

            int count = 0;

            // Count numbers less than or equal to mid
            for (int num : nums) {
                if (num <= mid)
                    count++;
            }

            if (count > mid) {
                high = mid;      // Duplicate is in the left half
            } else {
                low = mid + 1;   // Duplicate is in the right half
            }
        }

        return low;
    }
};