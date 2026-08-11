#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>>ans;
    set<vector<int>>sv;
    vector<int>temp;

    void recursion(int i, int cur, vector<int>&v)
    {
        if(cur==0)
        {
            sv.insert(temp);
            return;
        }
        if(i>=v.size() or cur<0)
            return;

        int nextInd = i+1;
        while(nextInd<v.size() && v[i]==v[nextInd])
            nextInd++;

        temp.push_back(v[i]);
        recursion(i+1, cur-v[i], v);

        temp.pop_back();
        recursion(nextInd, cur, v);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        recursion(0, target, candidates);
        for(auto each:sv)
        {
            ans.push_back(each);
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,5,2,1,2};
    obj.combinationSum2(vec, 8);
}

