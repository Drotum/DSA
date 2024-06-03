class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> freq(n,0),v;
        for(int i=0;i<n;i++)
        {
            freq[nums[i]-1]++;
        }
        for(int i=0;i<n;i++)
        {
            if(freq[i]==2)
            v.push_back(i+1);
        }
        return v;
    }
};