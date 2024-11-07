#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void dfs(int node, vector<vector<int>>& related, vector<bool>&visited)
    {
        visited[node] = true;
        for(int i=0; i<related.size(); i++)
        {
            if(related[node][i]==1 and !visited[i])
                dfs(i, related, visited);
        }
    }

    int countCreatorCommunities(vector<string> related)
    {
        int dimension = related.size();
        vector<vector<int>>matrix(dimension, vector<int>(dimension,0));
        for(int i=0; i<related.size(); i++)
        {
            for(int j=0; j<related[0].size(); j++)
            {
                //cout<<related[i][j];
                if(related[i][j] == '1')
                    matrix[i][j]=1;
                else
                    matrix[i][j] = 0;
                cout<<matrix[i][j]<<" ";
            }
            cout<<"\n";
        }

        vector<bool> visited(dimension, false);
        int community=0;

        for(int i=0; i<dimension; i++)
        {
            if(!visited[i])
            {
                dfs(i, matrix, visited);
                community++;
            }
        }

        return community;
    }
};

int main()
{
    Solution obj;
    vector<string>vec = {"1100", "1110", "0110", "0001"};
    cout<<obj.countCreatorCommunities(vec);
}
