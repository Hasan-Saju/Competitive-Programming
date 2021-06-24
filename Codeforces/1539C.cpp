#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,k,x;
    cin>>n>>k>>x;

    vector<ll>v,gap;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    for(ll i=1;i<n;i++)
    {
        if(v[i]-v[i-1]>x)
            gap.push_back(v[i]-v[i-1]);
    }

    sort(gap.begin(),gap.end());
    ll ans = gap.size();

//    for(auto x:gap )
//        cout<<x<<" ";
//    cout<<"\n";

    for(ll i=0;i<gap.size();i++)
    {

        ll need = ceil( (float)( gap[i]-x )/x );
       // cout<<gap[i]<<" "<<need<<" "<<ans<<"\n";

       if(k>=need and need)
            k = k-need,ans--;
        else
            break;
        //cout<<ans<<"\n";

    }
    cout<<ans+1<<"\n";

}
