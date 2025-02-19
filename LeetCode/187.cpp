#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        unordered_map<string, int>mp;
        string temp;
        vector<string>ans;
        for(int i=0; i<=9; i++)
        {
            temp+=s[i];
            if(i==9)
                mp[temp]++;
        }
        for(int i=10; i<s.size(); i++)
        {
            temp.erase(temp.begin());
            temp+=s[i];
            mp[temp]++;
        }

        for(auto x:mp )
        {
            if(x.second>1)
                ans.push_back(x.first);
        }

        for(auto x:ans)
            cout<<x<<" ";
        return ans;

    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.findRepeatedDnaSequences("AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT");
}
