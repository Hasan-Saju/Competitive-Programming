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
    ll n,s,x,sum=0,i,baki,badDiteHobe,ans,extra=0;
    vector<ll> v;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
        v.pb(x);

    }
    if(sum==s)cout<<"0";
    else if(s>sum)cout<<"-1";
    else{
            sort(v.begin(),v.end());
            for(i=0;i<n;i++)
            {
                extra=extra+v[i]-v[0];
            }
            //cout<<endl<<extra<<" ";
            if(extra>=s)cout<<v[0];
            else
            {
                 baki=s-extra;
            if(baki%n!=0)x=(baki/n)+1;
            else x=baki/n;
            badDiteHobe=ceil(x);
        ans=v[0]-badDiteHobe;
    cout<<ans;//<<" "<<badDiteHobe;
            }


    }

}



