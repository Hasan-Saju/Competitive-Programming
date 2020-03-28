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
#define check(x) (x>=0&&x<n)
int main()
{
   ll n,ans=0,kountL=0,kountR=0,i,j,x,total;
    cin>>n;
    vector<ll>v;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.pb(x);
    }
    sort(v.begin(),v.end());
    i=0,j=0;
   while(i<=j&&j<n)
   {
       if(v[j]-v[i]<=5)
       {
           j++;
       }
       else{
        ans=max(ans,j-i);
        i++;
       }
   }
   ans=max(ans,j-i);
  // ans=max(ans,j-1);
     cout<<ans;

}


