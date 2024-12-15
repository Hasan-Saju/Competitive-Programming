#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int>r;
        if(s.size()<p.size())
                return r;
        vector<int>src(26);
        vector<int>des(26);
        for(int i=0; i<p.size(); i++)
            src[s[i]-'a']++;
        for(int i=0; i<p.size(); i++)
            des[p[i]-'a']++;
        int match=0, ans =0;
        for(int i=0; i<26; i++)
        {
            if(src[i]==des[i])
                match++;
        }
        if(match==26)
            r.push_back(0);

        for(int i=1; i+p.size()<=s.size(); i++)
        {
            int prevInd = s[i-1]-'a';
            int nextInd = s[i+p.size()-1]-'a';

            src[prevInd]--;
            if( src[prevInd] ==  des[prevInd] && src[prevInd]+1 !=  des[prevInd])
                match++;
            else if(src[prevInd]+1==des[prevInd] && src[prevInd] !=  des[prevInd])
                match--;

            src[nextInd]++;
            if( src[nextInd] ==  des[nextInd] && src[nextInd]-1 !=  des[nextInd])
                match++;
            else if(src[nextInd]-1==des[nextInd] && src[nextInd] !=  des[nextInd])
                match--;

            if(match==26)
                r.push_back(i);
        }
        return r;
    }
};
int main()
{
    Solution obj;
    string s = "cbaebabacd";
    string p = "abc";
    vector<int>v=obj.findAnagrams(s,p);
    for(auto x:v)
        cout<<x<<" ";
}
