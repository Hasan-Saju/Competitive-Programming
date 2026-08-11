#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>>ans;
    vector<int>temp;

    void recursion(int i, int cur, vector<int>& v)
    {
        if(cur==0)
        {
            ans.push_back(temp);
            return;
        }
        if(i>=v.size() or cur<0)
            return;

        temp.push_back(v[i]);
        recursion(i, cur-v[i], v);

        temp.pop_back();
        recursion(i+1, cur, v);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        recursion(0, target, candidates);
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,3,6,7};
    obj.combinationSum(vec, 7);
}

