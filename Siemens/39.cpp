#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>>ans;
    vector<int>sample;
    void dfs(int i, vector<int>& t, int finall)
    {
        if(finall==0)
        {
            ans.push_back(t);
            return;
        }
        if(i>=sample.size() or finall<0)
            return;

        t.push_back(sample[i]);
        dfs(i, t, finall-sample[i]);

        t.pop_back();
        dfs(i+1, t, finall);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        vector<int>temp;
        sample = candidates;
        dfs(0, temp, target);

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,3,6,7};
    obj.combinationSum(vec, 7);
}
