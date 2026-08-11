#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canDistribute(int x, int n, vector<int>& quantities)
    {
        //cout<<"in "<<x<<endl;

        int j=0;
        int remain = quantities[j];

        for(int i=0; i<n; i++)
        {
            if(remain<=x)
            {
                j++;
                if(j==quantities.size())
                    return true;
                else
                    remain = quantities[j];
            }
            else
            {
                remain=remain-x;
            }

        }
        return false;
    }
    int minimizedMaximum(int n, vector<int>& quantities)
    {
        int left = 0;
        int right = INT_MIN;

        for(auto x:quantities)
            right = max(right, x);

        while(left<right)
        {
            int mid = (right+left)/2;

            if(canDistribute(mid,n,quantities))
            {
                right = mid;
            }
            else
            {
                left = mid+1;
            }
        }
        return left;
    }
};
int main()
{
    Solution obj;
    vector<int>quant = {15,10,10};
    cout<<obj.minimizedMaximum(7, quant);
}

