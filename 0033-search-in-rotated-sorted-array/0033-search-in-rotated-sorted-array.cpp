class Solution {
public:
    int search(vector<int>& arr, int target) {
        // 1 3 4 5 6 8 20 28 33
        // 6 8 20 28 33 1 3 4 5
        int n = arr.size();
        int low=0;
        int high=n-1;
        if(n==2){
            if(target==arr[0]) return 0;
            else if(target==arr[1]) return 1;
            else return -1;
        }
        //finding pivot element / index
        int pivot = -1; //smallest element
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mid==0) low=mid+1;
            else if(mid==n-1) high=mid-1;
            else if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1]){
                pivot=mid;
                break;
            }
            else if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                pivot=mid+1;
                break;
            }
            else if(arr[mid]>arr[high]) low=mid+1;
            // if(arr[mid]<arr[high]) 
            else high=mid-1;
        }
        if(pivot==-1){//already sorted ,  no rotation
            low=0;
            high=n-1;
            //normal binaery search on full array
            while(low<=high){
                int mid=low+(high-low)/2;
                if(arr[mid]==target) return mid;
                else if(arr[mid]>target) high=mid-1;
                else low=mid+1;
            }
            return -1;
        }
        if(target >=arr[0] && target <= arr[pivot-1]){
            low=0;
            high=pivot-1;
            //normal binaery search
            while(low<=high){
                int mid=low+(high-low)/2;
                if(arr[mid]==target) return mid;
                else if(arr[mid]>target) high=mid-1;
                else low=mid+1;
            }
        }
        else {
            low=pivot;
            high=n-1;
            //normal binaery search
            while(low<=high){
                int mid=low+(high-low)/2;
                if(arr[mid]==target) return mid;
                else if(arr[mid]>target) high=mid-1;
                else low=mid+1;
            }
        }
        return -1;
    }
};