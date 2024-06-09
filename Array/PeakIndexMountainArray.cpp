class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        int mid= low + (high - low)/2;
        while(low<=high)
        {
            if(mid!=0 && arr[mid-1]>arr[mid])
            {
                high=mid-1;
                mid= low + (high - low)/2;
                continue;
            }
            if(mid!=n && arr[mid+1]>arr[mid])
            {
                low=mid+1;
                mid= low + (high - low)/2;
                continue;
            }
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                return mid;
            }
        }
        return mid;
    }
};