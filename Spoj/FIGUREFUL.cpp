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
    map<pair<int,int>,string>ds;
    pair<int,int> p;
    int x,y,n,t;
    string s;
    cin>>n;
    FOR(i,n)
    {
        cin>>x>>y>>s;
        ds[make_pair(x,y)]=s;
       // ds.insert({x,y},s);
    }
    cin>>t;
    FOR(i,t)
    {
        cin>>x>>y;
        p=make_pair(x,y);
        cout<<ds[p]<<endl;
    }


}

