#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int>& nums)
    {
        int sum=0;
        for(auto x:nums)
            sum=sum^x;
        return sum;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,2,1};
    obj.singleNumber(vec);
}




