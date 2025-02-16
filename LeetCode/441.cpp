#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int arrangeCoins(int n)
    {
        long long k;
        for(k=1;; k++)
        {
            long long total = (k*(k+1))/2;
            if(total>n)
            {
                k=k-1;
                break;
            }
            else if(total==n)
                break;
        }
        return k;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.arrangeCoins(8);
}

