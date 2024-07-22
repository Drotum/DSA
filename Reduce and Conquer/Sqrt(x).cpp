class Solution {
public:
    long long mySqrt(long long x) {
        long long start=0;
        long long end=x;
        long long mid=start+(end-start)/2;
        while(start<=end)
        {
            if((mid*mid)==x)
            {
                return mid;
            }
            if((mid*mid)<x)
            {
                start=mid+1;
            }
            else if((mid*mid)>x)
            {
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return mid-1;
    }
};