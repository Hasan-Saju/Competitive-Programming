#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {

        int l=0;
        int r=1;
        int ans = 0;
        while(r<prices.size())
        {
            if(prices[r]<prices[l])
                l=r;
            else
                ans = max(ans, prices[r]-prices[l]);

            r++;
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {7,1,5,3,6,4};
    cout<<obj.maxProfit(vec);
}
