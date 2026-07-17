class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector <int> res;
        int i=0;
        int j=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                res.push_back(nums1[i]);
                i++;
            }
            else{
                res.push_back(nums2[j]);
                j++;
            }
        }
         while(i < m){
            res.push_back(nums1[i]);
            i++;
        }

        while(j < n){
            res.push_back(nums2[j]);
            j++;
        }

        int size = res.size();
        if(size % 2 == 1)
        {
            return res[size/2];
        }

        return (res[size/2 - 1] + res[size/2]) / 2.0;
    }
};