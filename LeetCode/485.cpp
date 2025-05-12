#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int temp=0, res=0;
        for(auto x:nums)
        {
            if(x==0)
            {
                res = max(temp,res);
                temp=0;
            }
            else
                temp+=1;
        }
        res = max(temp,res);
        return res;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,1,0,1,1,1};
    cout<<obj.findMaxConsecutiveOnes(vec);
}

