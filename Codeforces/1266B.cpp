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

    ll n,x,ans,guti;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ans=x%14;
        guti=x/14;
        if(guti>=1&&ans<=6&&ans>=1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}



