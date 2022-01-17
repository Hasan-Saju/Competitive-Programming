#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int>share;
        int profit=0;

        for(int i=0; i<prices.size(); i++)
        {
            if(share.empty())
                share.push(prices[i]);
            if(prices[i]<=share.top())
            {
                while(!share.empty())
                    share.pop();
                share.push(prices[i]);
            }
            else
            {
                profit+= (prices[i]-share.top());
                share.pop();
                share.push(prices[i]);
            }

            //cout<<profit<<"\n";
        }

        return profit;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {7,6,4,3,1};
    obj.maxProfit(vec);
}



