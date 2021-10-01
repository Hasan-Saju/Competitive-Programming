#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);

vector<ll>v;
///lower_bound == Shoman othoba prothom boro element ta return korbe//iterator return kore
///upper bound mane first boro element return korbe


int main()
{
    fast

    int n;
    cin>>n;
    ll sum=0;


    for(ll i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
        sum+=x;

    }


    ll m;
    cin>>m;

    sort(v.begin(), v.end());

    for(ll i=0; i<m; i++)
    {
        ll x,y;
        cin>>x>>y;

        ll ans1=LONG_MAX,ans2=LONG_MAX;

        ll attack = min(lower_bound(v.begin(),v.end(),x)-v.begin(),n-1);

        ll defense = sum-v[attack];

        if(defense>=y and v[attack]>=x)
            ans1=0;
        else if(defense>=y and v[attack]<x)
            ans1=x-v[attack];
        else if(defense<y and v[attack]>=x)
            ans1=y-defense;
        else
            ans1=y-defense+x-v[attack];

        ll zero=0;
        attack = max(attack-1,zero);
        defense = sum-v[attack];

        if(defense>=y and v[attack]>=x)
            ans2=0;
        else if(defense>=y and v[attack]<x)
            ans2=x-v[attack];
        else if(defense<y and v[attack]>=x)
            ans2=y-defense;
        else
            ans2=y-defense+x-v[attack];

        cout<<min(ans1,ans2)<<"\n";

    }

}
