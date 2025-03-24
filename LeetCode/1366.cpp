#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string rankTeams(vector<string>& votes)
    {
        int m = votes.size(), n = votes[0].size();
        vector<vector<int>>mat(n, vector<int>(26,0));
        for(auto vote:votes)
        {
            for(int j=0; j<n; j++)
            {
                mat[j][vote[j]-'A']++;
            }
        }

        string ans = votes[0];
        sort(ans.begin(), ans.end(), [&](char a, char b)
        {
            for(int i=0; i<n; i++)
            {
                if(mat[i][a-'A']==mat[i][b-'A'])
                    continue;
                else return mat[i][a-'A']>mat[i][b-'A'];
            }

            return a<b;

        });
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<string>vec = {"ABC","ACB","ABC","ACB","ACB"};
    obj.rankTeams(vec);
}
