#include<bits/stdc++.h>
using namespace std;
class UnionFind
{
    vector<int>parent;
public:
    UnionFind(int n)
    {
        parent.resize(n,0);
        for(int i=0; i<n; i++)
            parent[i]=i;
    }

    int Find(int represent)
    {
        if(represent==parent[represent])
            return represent;
        else
            return parent[represent] = Find(parent[represent]);
    }

    void Union(int a, int b)
    {
        int p1 = Find(a);
        int p2 = Find(b);

        if(p1==p2)
        {
            //cout<<"Already same group";
        }
        else
            parent[p2] = p1;
    }
};
class Solution
{
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts)
    {
        int n = accounts.size();
        UnionFind uf(n);
        map<string, int>emailUser;
        for(int i=0; i<n; i++)
        {
            for(int j=1; j<accounts[i].size(); j++)
            {
                auto email= accounts[i][j];
                if(emailUser.count(email))
                {
                    uf.Union(i, emailUser[email]);
                }
                else
                    emailUser[email] = i;
            }
        }

        map<int, vector<string>>emailGroup;
        for(auto x:emailUser)
        {
            int leader = uf.Find(x.second);
            emailGroup[leader].push_back(x.first);
        }

        vector<vector<string>>res;
        for(auto group:emailGroup)
        {
            auto [leader, emails] = group;
            sort(emails.begin(), emails.end());

            vector<string>temp;
            temp.push_back(accounts[leader][0]);
            temp.insert(temp.end(), emails.begin(), emails.end());
            res.push_back(temp);
        }

        return res;
    }
};
int main()
{
    Solution obj;
    vector<vector<string>>vec = {{"John","johnsmith@mail.com","john_newyork@mail.com"},{"John","johnsmith@mail.com","john00@mail.com"},
        {"Mary","mary@mail.com"},{"John","johnnybravo@mail.com"}
    };
    obj.accountsMerge(vec);
}

