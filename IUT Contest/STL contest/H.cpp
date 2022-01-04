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
    ll n,m,x,y,i;
    set<ll>sett;

    while(true)
    {

     cin>>n>>m;
     if(n==0&&m==0)break;
    for(i=0;i<n;i++)
    {
        cin>>x;
        sett.insert(x);
    }
    for(i=0;i<m;i++)
    {
        cin>>x;
        sett.insert(x);
    }

    cout<<(n+m)-sett.size()<<endl;
    sett.clear();

    }

}

