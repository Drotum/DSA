class Solution {
public:
    bool checkfrequency(string s1, vector<int> freq2, int n) {
        vector<int> freq1(26,0);        //to store the frequency of letters in the substring
        for(int i=0;i<n;i++)
        {
            freq1[s1[i]-97]++;          //to count no of occurance of each letter in substring passed;
        }
        if(freq1==freq2)
        {
            return true;
        }
        else{
            return false;
        }
    }
    bool checkInclusion(string s1, string s2) {
        int m=s2.length()+1;
        int n=s1.length();
        vector<int> freq2(26,0);        //to store the frequency of letters of the provided string
        for(int i=0;i<n;i++)
        {
            freq2[s1[i]-97]++;          //to count no of occurance of each letter in s1;
        }
        for(int i=0;i<m-n;i++)
        {
            string s=s2.substr(i,n);
            if(checkfrequency(s,freq2,n))
            {
                return true;
            }
        }
        return false;
    }
};