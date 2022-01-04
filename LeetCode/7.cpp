#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    long long rev(long long x)
    {
        long long number = 0;

        while(x)
        {
            long long last = x%10;
            number = number*10 + last;
            x = x/10;
        }
        return number;

    }

    long long reverse(long long x)
    {
        bool minuss=false;

        if(x<0)
            minuss=true;

        if(minuss)
            x=x*-1;

        long long ans = rev(x);
        if(minuss)
            ans=ans*-1;

        //cout<<ans;
        if(ans>2147483647 or ans<-2147483648)
            return 0;
        else
        return ans;
    }
};

int main()
{
    long long x = 1534236469;
    Solution obj;
    obj.reverse(x);
}
