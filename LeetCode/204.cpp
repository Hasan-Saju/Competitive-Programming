#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countPrimes(int n)
    {
        vector<int>pr(n, 1);
        vector<int>totalPr;
        for(int i=2; i*i<=n; i++)
        {
            if(pr[i])
            {
                for(int j=i*i; j<n; j=j+i)
                {
                    pr[j]=0;
                }
            }
        }

        for(int i=2; i<n; i++)
            if(pr[i])
                totalPr.push_back(i);

        return totalPr.size();
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.countPrimes(10);
}

