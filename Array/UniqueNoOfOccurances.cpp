class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        vector<int> freq(2001, 0);
        int n = arr.size();
        for(int i = 0; i < n; i++)
        {
            freq[arr[i] + 1000]++;
        }

        vector<bool> freqcount(1000, 0);

        for(int i = 0; i < 2001; i++)
        {
            if(freq[i] != 0) {
                if(freqcount[freq[i]]) return false;

                freqcount[freq[i]] = 1;
            }
        }

        return true;
    }
};