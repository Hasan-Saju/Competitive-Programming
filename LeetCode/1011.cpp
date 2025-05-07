#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int shipWithinDays(vector<int>& weights, int days)
    {
        int l=INT_MIN, r=0;
        for(auto x:weights)
        {
            l = max(l,x);
            r += x;
        }
        int res=r;

        while(l<=r)
        {
            int cap = (l+r)/2;

            if(canShip(weights, days, cap))
            {
                res = min(res, cap);
                r = cap-1;
            }
            else
            {
                l = cap+1;
            }
        }

        return res;
    }


    bool canShip(vector<int>& weights, int days, int capacity)
    {
        int curVal=capacity;
        int ship=1;
        for(auto w: weights)
        {
            if(curVal-w<0)
            {
                ship++;
                if(ship>days)
                    return false;

                curVal = capacity;
            }

            curVal -= w;
        }
        return true;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,2,3,4,5,6,7,8,9,10};
    cout<<obj.shipWithinDays(vec, 5);
}

