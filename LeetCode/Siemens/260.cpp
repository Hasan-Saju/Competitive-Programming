#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans;
        unsigned int xorAll=0;

        for(auto num:nums)
            xorAll = xorAll^num;

        int diff = xorAll & (~xorAll + 1);

        int a=0;
        int b=0;

        for(auto num:nums)
        {
            if(num&diff)
                a = a^num;
            else
                b = b^num;
        }

        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec);
}

