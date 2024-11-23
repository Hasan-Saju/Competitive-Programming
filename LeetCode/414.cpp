#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int thirdMax(vector<int>& nums)
    {
        long long first = LONG_MIN;
        long long second = LONG_MIN;
        long long third = LONG_MIN;
        for(auto x:nums)
        {
            if(x>first)
            {
                third = second;
                second = first;
                first = x;
            }
            else if(x>second and x!=first)
            {
                third=second;
                second=x;
            }
            else if(x>third and x!=first and x!=second)
                third = x;

            cout<<first<<" "<<second<<" "<<third<<"\n";
        }
        return third!=LONG_MIN ? third:first;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {3,1};
    cout<<obj.thirdMax(vec);
}

