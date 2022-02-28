#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int siz=nums.size();
        int last=siz-1;
        int product=nums[last];

        vector<int>ans(siz);

        ans[0]=nums[0];
        for(int i=1; i<siz-1; i++)
        {
            ans[i]=nums[i]*ans[i-1];
        }

        ans[last]=ans[last-1];
        for(int i=last-1; i>0; i--)
        {
            ans[i] = ans[i-1]*product;
            product*=nums[i];
        }
        ans[0]=product;

//        for(auto x:ans)
//            cout<<x<<" ";
//        cout<<"\n";
        return ans;
    }

};

int main()
{
    Solution obj;
    vector<int>vec = {1,2,3,4};
    obj.productExceptSelf(vec);
}






