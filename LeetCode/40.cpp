#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    set<vector<int>>ans;
    void backtrack(int target, int val, vector<int>curr, int ind,  vector<int>cand)
    {
        if(val==target)
        {
            ans.insert(curr);
            return;
        }
        else if(val>target or ind>=cand.size())
            return;
        int nexInd = ind+1;
        while(nexInd<cand.size() and cand[ind]==cand[nexInd])
            nexInd++;
        backtrack(target, val, curr, nexInd, cand);
        curr.push_back(cand[ind]);
        backtrack(target, val+cand[ind], curr, ind+1, cand);
        curr.pop_back();
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
    {
        vector<int>v;
        vector<vector<int>>finall;
        sort(candidates.begin(), candidates.end());
        backtrack(target, 0, v, 0, candidates);

        for(auto x:ans)
            finall.push_back(x);

        return finall;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {10,1,2,7,6,1,5};
    vector<vector<int>> ans = obj.combinationSum2(vec, 8);
    for(auto x:ans)
    {
        for(auto y:x)
        {
            cout<<y<<" ";
        }
        cout<<"\n";
    }
}

