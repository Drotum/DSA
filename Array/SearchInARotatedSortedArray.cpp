class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1)
        {
            if(nums[0]==target)
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        int k=0;
        int ans=-1;
        while(start<=end)
        {
            if(mid!=0 && nums[mid]>nums[mid-1])
            {
                if(nums[mid]>nums[0])
                {
                    start=mid+1;
                }
                else if(nums[mid]<nums[0])
                {
                    end=mid-1;
                }
            }
            else if(mid == 0 && nums[mid] > nums[mid + 1])
            {
                k = mid + 1;
                break;
            }
            else
            {
                k=mid;
                break;
            }
            mid=start+(end-start)/2;
        }
        cout<<k<<endl;
        if(target<nums[0] && k!=0)
        {
            start=k;
            end=nums.size()-1;
            mid=start+(end-start)/2;
            while(start<=end)
            {
                if(nums[mid]==target)
                {
                    ans=mid;
                    break;
                }
                else if(nums[mid]<target)
                {
                    start=mid+1;
                }
                else if(nums[mid]>target)
                {
                    end=mid-1;
                }
                mid=start+(end-start)/2;
            }
        }
        if(target>=nums[0] && k!=0)
        {
            start=0;
            end=k;
            mid=start+(end-start)/2;
            while(start<=end)
            {
                if(nums[mid]==target)
                {
                    ans=mid;
                    break;
                }
                else if(nums[mid]<target)
                {
                    start=mid+1;
                }
                else if(nums[mid]>target)
                {
                    end=mid-1;
                }
                mid=start+(end-start)/2;
            }
        }
        if(k==0)
        {
            start=0;
            end=nums.size()-1;
            mid=start+(end-start)/2;
            while(start<=end)
            {
                if(nums[mid]==target)
                {
                    ans=mid;
                    break;
                }
                else if(nums[mid]<target)
                {
                    start=mid+1;
                }
                else if(nums[mid]>target)
                {
                    end=mid-1;
                }
                mid=start+(end-start)/2;
            }
        }
        return ans;
    }
};