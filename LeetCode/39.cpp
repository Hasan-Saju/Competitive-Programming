#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;
    int finall;
    vector<int> samples;
    void dfs(int i, vector<int>& curr, int t)
    {
        if(t==finall)
        {
            result.push_back(curr);
            return;
        }
        else if(i>=samples.size() or t>finall)
            return;

        curr.push_back(samples[i]);
        dfs(i, curr, t+samples[i]);
        curr.pop_back();
        dfs(i+1, curr, t);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        finall = target;
        samples = candidates;
        vector<int>v;
        dfs(0, v, 0);

        return result;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,3,6,7};
    obj.combinationSum(vec, 7);
}
