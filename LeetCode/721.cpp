#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:

    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts)
    {
        multimap<string,set<string>>ms;
        for(auto v: accounts)
        {
            int neww = 0;
            int match = 0;
            set<string> current, temp;
            if(ms.find(v[0])==ms.end())
                neww = 1;
            else
                current = ms[v[0]];

            for(int i=1; i<v.size(); i++)
            {
                if(neww)
                    ms[v[0]].insert(v[i]);
                else
                {
                    if(current.find(v[i])!=current.end())
                        match = 1;
                    temp.insert(v[i]);
                }
            }
            if(match)
                ms[v[0]].insert(temp.begin(), temp.end());
            else
                ms.insert({v[0], temp});
        }

        for(auto m: ms)
        {
            cout<<m.first<<" : ";
            for(auto x:m.second)
            {
                cout<<x<<" ";
            }
            cout<<"\n";
        }
    }
};
int main()
{
    Solution obj;
    vector<vector<string>>vec = {{"John","johnsmith@mail.com","john_newyork@mail.com"},{"John","johnsmith@mail.com","john00@mail.com"},
        {"Mary","mary@mail.com"},{"John","johnnybravo@mail.com"}
    };
    obj.twoSum(vec);
}

