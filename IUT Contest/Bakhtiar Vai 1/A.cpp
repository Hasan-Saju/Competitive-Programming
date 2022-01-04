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
int ara[6][6];
int main()
{
    int i,j,total,ans=-999999999;
    FOR(i,6)
    {
        FOR(j,6)
        {
            cin>>ara[i][j];
        }
    }

    for(i=1; i<5; i++)
    {
        for(j=1; j<5; j++)
        {
            total=ara[i][j]+ara[i+1][j]+ara[i-1][j]+ara[i+1][j+1]+ara[i+1][j-1]+ara[i-1][j-1]+ara[i-1][j+1];
          //  cout<<total<<" ";
            ans=max(ans,total);
        }
    }
    cout<<ans;
}



