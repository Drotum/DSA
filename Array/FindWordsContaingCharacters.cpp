class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> v;
        int n = words.size();
        // loop for iterating to each word
        for (int i=0;i<n;i++)
        {
            int len = words[i].size();
            // loop for iterating through each letter of the word
            for(int j=0;j<len;j++)
            {
                // checking if target letter present and storing the index
                if(words[i][j]==x)
                {
                    v.push_back(i);
                    break;
                }
            
            }
        }
        return v;
    }
};