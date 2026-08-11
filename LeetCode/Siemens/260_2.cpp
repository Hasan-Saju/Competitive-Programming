#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> singleNumber(vector<int>& nums)
    {
        unsigned int xorAll = 0;
        for(auto x:nums)
            xorAll = xorAll^x;

        unsigned int diff = xorAll & (~xorAll+1);

        int a=0;
        int b=0;

        for(auto x:nums)
        {
            if(diff&x)
                a = a^x;
            else
                b= b^x;
        }

        return vector<int>{a,b};
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,2,1,3,2,5};
    obj.singleNumber(vec);
}

