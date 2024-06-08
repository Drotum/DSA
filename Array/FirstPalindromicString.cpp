class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string s;
        int n = words.size();
        int i;
        int j;
        int flag = 0;
        for(i = 0; i < n; i++)
        {
            if(flag == 1) break;
            s = words[i];
            int k = s.size();
            flag = 1;
            for(j = 0; j < k/2; j++)
            {
                if(s[j] == s[k - j - 1])
                {
                    continue;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag==0)
        return "";
        else
        {
        return words[i - 1];
        }
    }
};