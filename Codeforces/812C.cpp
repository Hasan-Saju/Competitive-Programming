#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n,s;
vector<ll> v;

ll check(ll mid,ll n)
{
    vector<ll>temp(n);

    ll cost=0,i;
    for( i=0;i<n;i++)
    {
        temp[i]= v[i]+(mid*(i+1));
    }
    sort(temp.begin(),temp.end());
    for(i=0;i<mid;i++)
        cost+=temp[i];

    return cost;
}

int main()
{

    cin>>n>>s;


    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.emplace_back(x);
    }

    ll left=0,right=n,ans=0,value=0;

    while(left<=right)
    {
        ll mid=(left+right)/2;
        ll c=check(mid,n);
       // cout<<left<<" "<<mid<<" "<<right<<" "<<c<<"\n";
        if(c<=s)
        {
            ans=mid;
            value=c;
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }

    }

    cout<<ans<<" "<<value;



}
