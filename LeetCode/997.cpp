#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1)
            return 1;
        unordered_map<int, int>indegree;
        int ans = -1;
        int cand = -1;
        unordered_map<int, int>out;
        for(auto v:trust)
        {
            indegree[v[1]]++;
            if(indegree[v[1]]==n-1)
                cand = v[1];
            out[v[0]] = v[1];
        }
        if(cand!=-1 and out.find(cand)==out.end())
            return cand;
        else
            return -1;

    }
};
int main()
{
    Solution obj;
    vector<vector<int>>vec = {{1,3}, {2,3}, {3,1}};
    cout<<obj.findJudge(3,vec);
}

