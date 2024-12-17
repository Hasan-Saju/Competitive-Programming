#include<bits/stdc++.h>
using namespace std;
class Solution
{

public:
    string frequencySort(string s)
    {

        map<char, int>mp;
        vector<char>v;
        for(auto c:s)
        {
            mp[c]++;
            v.push_back(c);
        }
        sort(v.begin(), v.end(), [&mp](const char& a, const char& b)
        {
            return mp[a] == mp[b] ? a<b : mp[a]>mp[b];
        });
        string ans="";
        for(auto c:v)
           ans+=c;

        return ans;
    }
};
int main()
{
    Solution obj;
    string s = "tree";
    obj.frequencySort(s);
}

