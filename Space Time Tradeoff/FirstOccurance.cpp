class Solution {
public:
    int horsepool(const string& needle, const string& haystack) {
        int n = haystack.size();
        int m = needle.size();
        if (m > n)
            return -1;
        unordered_map<char, int> shift;
        for (int i = 0; i < 256; ++i) {
            shift[static_cast<char>(i)] = m;
        }
        for (int j = 0; j < m - 1; ++j) {
            shift[needle[j]] = m - 1 - j;
        }
        int i = m - 1; 
        while (i < n) {
            int k = 0;
            while (k < m && needle[m - 1 - k] == haystack[i - k]) {
                ++k;
            }
            if (k == m) {
                return i - m + 1;
            } else {
                i += shift[haystack[i]];
            }
        }
        return -1;
    }
    int strStr(string haystack, string needle) {
        int result = horsepool(needle, haystack);
        return result;
    }
};