#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool canDistribute(int x, int& n, vector<int>& quantities)
    {
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
                remain = remain-x;
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
            int mid = (right-left)/2 + left;
            if(canDistribute(mid, n, quantities))
                right = mid;
            else
                left = mid+1;
        }
        return left;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {11,6};
    cout<<obj.minimizedMaximum(6,vec);
}

