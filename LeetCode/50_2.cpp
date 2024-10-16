#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double power(double x, int n)
    {
        if (x == 0)
            return 0;
        if (n==0)
            return 1;

        double res = power(x, n/2);
        res *= res;
        return n%2 ? x*res:res;
    }

    double myPow(double x, int n)
    {
        double result = power(x, abs(n));
        return n<0 ? 1/result : result;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.myPow(2.0, 10);
}

