#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    int trie[10000][26];
    int visited[10000];
    int id=1;
    void build_trie(string s)
    {
        int root=1;

        int ch;
        for(int i=0; i<s.size(); i++)
        {

            ch=s[i]-'a';
            if(trie[root][ch]==0)
                trie[root][ch]=++id;

            root=trie[root][ch];
            visited[root]++;
        }
    }

    string LCP(string s, int sizee )
    {
        string ans="";
        if(s.size()==0)
            return ans;

        int root=1;
        int ch;
        bool concat=false;
        int ansChar=0;

        for(int i=0; i<=s.size(); i++)
        {
            //cout<<visited[root]<<"\n";
             if(visited[root]==sizee)
                ansChar++;

            if(visited[root]<sizee and root>1)
                break;

            if(i==s.size())continue;
            ch=s[i]-'a';
            //ans+=s[i];
            root=trie[root][ch];
            //cout<<i<<" "<<ans<<"\n";
        }
        //cout<<"Len: "<<ansChar<<"\n";
        for(int i=0;i<ansChar;i++)
            ans+=s[i];
        return ans;
    }


    string longestCommonPrefix(vector<string>& strs)
    {
        for(auto s:strs )
            build_trie(s);
        return LCP(strs[0], strs.size());
    }
};

int main()
{
    Solution obj;
    vector<string>vec = {"aaaaaa","aaaaaa","aaaaaa","aaaaaa"};
    string ans = obj.longestCommonPrefix(vec);
    cout<<ans;
}


