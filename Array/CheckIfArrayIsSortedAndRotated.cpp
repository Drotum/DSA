class Solution {
public:
    bool check(vector<int>& nums) {
        int flag=1;
        int n=nums.size();
        int i;
        int flag1=1;
        for(i=0;i<n-1;i++)
        {
            if(nums[i+1]>=nums[i])
            {
                continue;
            }
            else
            {
                break;
            }
        }
        if(i!=n-1)
        {
            i++;
            for(i;i<n-1;i++)
            {
                if(nums[i+1]>=nums[i])
                {
                    continue;
                }
                else{
                    break;
                }
            }
        }
        if(i!=n-1)
        {
            flag=0;
        }
        if(nums[n-1]>nums[0])
        {
            flag=0;
        }
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]<nums[i])
            {
                flag1=0;
            }
        }
        if(flag==0 && flag1==0)
        {
            return flag;
        }
        else
        {
            return true;
        }
    }
};