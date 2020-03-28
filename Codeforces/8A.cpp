#include<bits/stdc++.h>
#include <iostream>
#include <string>
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

ll Digits(ll a)
{
    return(floor(log10(a))+1);
}
ll BMod(ll B,ll P,ll M)
{
    ll R=1;
    B=B%M;
    while(P)
    {
        if(P&1)
            R=(R*B)%M;
        P >>= 1;
        B=(B*B)%M;
    }
    return R;
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
ll lcm(ll a,ll b)
{
    return a*b/gcd(a,b);

}


int main()
{
    fast
    //freopen("out.txt", "w", stdout);    //to write the output in a txt file
    //freopen("in.txt", "r", stdin);
    string t,a,b,r,temp;
    int flag=0,flag2=0;
    cin>>t>>a>>b;
    r=t;
    reverse(r.begin(),r.end());
 //   cout<<r;
    int f=t.find(a);
  //  cout<<f;
    if(f!=-1)
    {
        f=t.find(b,f+a.size());
        if(f!=-1)flag=1;
    }

  //  reverse(temp.begin(),temp.end());
    int s=r.find(a);
    if(s!=-1)
    {
        s=r.find(b,s+a.size());
        if(s!=-1)flag2=1;
    }

    if(flag==1 and flag2==1)cout<<"both";
    else if(flag&&!flag2)cout<<"forward";
    else if(!flag&&flag2)cout<<"backward";
   else cout<<"fantasy";
  // cout<<endl<<flag<<" "<<flag2<<r;





   }

