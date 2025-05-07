#include<bits/stdc++.h>
using namespace std;
class Solution
{
private:
    set<vector<int>>res;
    void permutation(vector<int>& nums, vector<int>& vis, vector<int>& temp)
    {
        if(temp.size()==nums.size())
        {
            for(auto x:temp)
                cout<<x<<" ";
            cout<<"\n";

            res.insert(temp);
            return;
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(!vis[i])
            {
                vis[i]=1;
                temp.push_back(nums[i]);
                permutation(nums, vis, temp);

                vis[i] = 0;
                temp.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums)
    {
        vector<int>vis(nums.size(),0);
        vector<int>temp;
        permutation(nums, vis, temp);

        vector<vector<int>>ans;
        for(auto vec:res)
            ans.push_back(vec);

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,2,3};
    obj.permuteUnique(vec);
}

