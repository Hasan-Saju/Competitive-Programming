#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int>mp;
        for(auto ch:chars)
            mp[ch]++;

        int ans = 0;
        for(auto s:words)
        {
            vector<int>v(26,0);
            bool in = true;
            for(int i=0; i<s.size(); i++)
            {
                v[s[i]-'a']++;
                cout<<v[s[i]-'a']<<"\n";
                if(v[s[i]-'a']>mp[s[i]])
                {
                    cout<<s<<" \n";
                    in = false;
                    break;
                }
            }
            if(in)
            ans+=s.size();
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    vector<string>vec = {"hello","world","leetcode"};
    string ch = "welldonehoneyr";
    cout<<obj.countCharacters(vec, ch);
}

