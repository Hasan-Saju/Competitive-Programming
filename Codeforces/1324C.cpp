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
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);


int main()
{
    fast
    //freopen("out.txt", "w", stdout);    //to write the output in a txt file
    //freopen("in.txt", "r", stdin);
    int t,maxx=-999999,diff;
    cin>>t;
    while(t--)
    {
        string s;
        vector<int>v;
        cin>>s;
        v.pb(0);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')v.pb(i+1);
        }
        v.pb(s.size()+1);
        sort(v.begin(),v.end());
       for(int i=1;i<v.size();i++)
       {
        diff=v[i]-v[i-1];
        maxx=max(diff,maxx);
       }
        cout<<maxx<<endl;
        v.clear();
        maxx=-89999999;

    }

}

