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
    int n,i;
    cin>>n;
    double ans=0.0;

    for(i=n;i>=1;i--)
    {
        ans+=(double)1.0/i;
    }
    cout.precision(12);
    cout<<fixed<<ans;

}



