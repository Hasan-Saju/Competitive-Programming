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
    int n,d,i;
    cin>>n>>d;
    int ara[n];
    memset(ara,0,sizeof(ara));

    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=d;i<n;i++)
        cout<<ara[i]<<" ";
    for(i=0;i<d;i++)
         cout<<ara[i]<<" ";

}



