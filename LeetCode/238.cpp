#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        long long product=1;
        vector<int>ans;
        int zero=0;

        for(auto x:nums)
            {
                if(x!=0)
                product*=x;
                if(x==0)zero++;
            }
            if(zero>1)product=0;

        for(auto x:nums)
        {
            if(x==0 and zero<=1)
                ans.push_back(product);
            else if(zero and x!=0 || zero>1)
                ans.push_back(0);
            else ans.push_back(product/x);

        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,2,3,4};
    obj.productExceptSelf(vec);
}





