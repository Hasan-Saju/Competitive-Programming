#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPal(const string& s, int l, int r)
    {
        while (l < r)
        {
            if (s[l] != s[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }

    void dfs(int i, const string& s, vector<string>& part, vector<vector<string>>& res)
    {
        if(i>=s.size())
        {
            res.push_back(part);
            return;
        }

        for(int j=i; j<s.size(); j++)
        {
            if(isPal(s, i, j))
            {
                part.push_back(s.substr(i, j-i+1));
                dfs(j+1, s, part, res);
                part.pop_back();
            }
        }
    }
    vector<vector<string>> partitionn(string s)
    {
        vector<vector<string>>res;
        vector<string>part;
        dfs(0, s, part, res);

        return res;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.partitionn("aab");
}

