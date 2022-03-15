#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxLength(vector<int>& nums)
    {
        int n=nums.size();
        map<int,int>mp;
        mp[0]=-1;
        int value=0;
        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==0)
                value--;
            else
                value++;
            //cout<<value<<"\n";
            if(mp.count(value)==0)
            {
                //cout<<"in\n";
                mp[value]=i;
            }
            else
                ans=max(ans,i-mp[value]);
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {0,0,1};
    int ans=obj.findMaxLength(vec);
    cout<<ans;
}

