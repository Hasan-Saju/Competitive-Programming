#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int divide(long long dividend, long long divisor)
    {
        long long i=0;
        long long ans=0;
        if(dividend<0 or divisor<0)
            ans=1;
        if(dividend<0 and divisor<0)
            ans = 0;
        dividend = abs(dividend);
        divisor = abs(divisor);
        if(dividend<divisor)
            return 0;
        for(i=1; dividend>=divisor; i++)
        {
            dividend -= divisor;
            if(dividend<divisor)
                break;
        }
        cout<<ans<<" "<<i<<endl;
        if(ans) i=i*-1;
        cout<<ans<<" "<<i<<endl;
        if(i>=2147483648)
            i = 2147483647;
        else if(i<-2147483648)
            i = -2147483648;
        return i;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.divide(-2147483648,-1);
}


