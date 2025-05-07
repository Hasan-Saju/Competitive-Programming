#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        map<char, char>mp;
        map<char, int> tar;
        if(s.size()!=t.size())
            return false;
        for(int i=0; i<s.size(); i++)
        {
            if(!mp.count(s[i]) and !tar.count(t[i]))
            {
                //cout<<"here";
                mp[s[i]] = t[i];
                tar[t[i]] = 1;
            }
            else if(mp[s[i]] == t[i])
                continue;
            else
                return false;
        }
        return true;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.isIsomorphic("badc","baba");
}

