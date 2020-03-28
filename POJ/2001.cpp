//#include<bits/stdc++.h>
//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <iomanip>
//#include <map>
//#include <set>
//#include <vector>
//#include <cmath>
//#include <conio.h>
//#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define si set<int>
#define FOR(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
int trie[1000000][26];
int visited[1000000];
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

string shortestUniquePrefix(string s )
{
    string ans="";
    int   root=1;
    int ch;
    for(int i=0; i<s.size(); i++)
    {
        if(visited[root]==1)
            return ans;
        ch=s[i]-'a';
        ans+=s[i];
        root=trie[root][ch];
    }
    return ans;
}

//normal trie
//1 pawa mane ei porjonto unique ar keu ashe nai ekjon chara
int main()
{
   // fast

    vector<string>v;
    string s;
    int input=0,i;
    while(getline(cin,s))
    {
     //   if(s.size()==0)break;
        v.push_back(s);
        build_trie(s);
        input++;
    }

    FOR(i,input)
    {
        cout<<v[i]<<" "<<shortestUniquePrefix(v[i])<<endl;
    }



}

