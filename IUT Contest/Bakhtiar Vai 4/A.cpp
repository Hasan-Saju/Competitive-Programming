#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define si set<int>
#define FOR(i,n) for(int i=0;i<n;i++)
int main()
{
    int t;
    cin>>t;

    while(t--)
    {


    int n,g,i,j;

    string s;
    char x,y;
    char alp[30];

    cin>>n>>g;
    cin>>s;
    for(i=0;i<26;i++)alp[i]='a'+i;
    for(i=0;i<g;i++)
    {
        cin>>x>>y;
        for(j=0;j<26;j++)
        {
            if(alp[j]==x)alp[j]=y;
            else if(alp[j]==y)alp[j]=x;
        }
    }
    for(i=0;i<s.size();i++)
    {
        s[i]=alp[s[i]-'a'];
    }
    cout<<s<<endl;


    }
}

