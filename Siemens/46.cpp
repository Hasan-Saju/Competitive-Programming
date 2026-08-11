#include<bits/stdc++.h>
using namespace std;
class Solution {

public:
    vector<vector<int>>ans;
    void backtrack(vector<bool>& visit, vector<int>& perm, vector<int>& nums)
    {
        if(perm.size()==nums.size())
        {
            ans.push_back(perm);
            return;
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(!visit[i])
            {
                perm.push_back(nums[i]);
                visit[i] = true;

                backtrack(visit, perm, nums);
                perm.pop_back();
                visit[i] = false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool>visit(nums.size(), false);
        vector<int>perm;
        backtrack(visit, perm, nums);
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.permute(vec);
}

