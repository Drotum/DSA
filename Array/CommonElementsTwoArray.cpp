class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i = 0;
        int s1 = nums1.size(), s2 = nums2.size();
        int j, count1 = 0, count2 = 0;
        for(i = 0; i < s1; i++)
        {
            for(j = 0; j < s2; j++)
                {
                    if(j < s2 - 1 && nums2[j]==nums2[j+1])
                        continue;
                    else
                    {
                        if(nums1[i]==nums2[j])
                        {
                            count1=count1+1;
                        }
                        else
                        {
                            continue;
                        }
                    }
                }
            }
            
        for(i = 0; i < s2; i++)
        {
            for(j = 0; j < s1; j++)
                {
                    if(j < s1 - 1 && nums1[j]==nums1[j+1])
                        continue;
                    else
                    {
                        if(nums2[i]==nums1[j])
                        {
                            count2=count2+1;
                        }
                        else
                        {
                            continue;
                        }
                    }
                }
            }
            
        
        a.push_back(count1);
        a.push_back(count2);
        return a;
    }
};