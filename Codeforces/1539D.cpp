#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second

bool sortbysec(const pair<ll,ll> &a,
               const pair<ll,ll> &b)
{
    return (a.second < b.second);
}

int main()
{
    ll n;
    cin>>n;

    vector<pair<ll,ll>>vp;

    for(ll i=0; i<n; i++)
    {
        ll x,y;
        cin>>x>>y;

        vp.push_back(make_pair(x,y));
    }
    sort(vp.begin(),vp.end());
    sort(vp.begin(),vp.end(),sortbysec);

    ll bought = 0,price=0;
    for(ll f=0,l=vp.size()-1; f<=l;)
    {
        if(bought<vp[f].ss)
        {
            ll buy = min(vp[f].ss-bought,vp[l].ff);
            bought+= buy;
            price+= (2*buy);
            vp[l].ff-=buy;
            if(vp[l].ff==0)
                l--;
        }
        //cout<<bought<<"  upor "<<" "<<price<<"\n";

         if(bought>=vp[f].ss)
        {
            ll buy = vp[f].ff;
            bought += buy;
            price+= (1*buy);
            f++;
        }
        //cout<<bought<<"  nich "<<" "<<price<<"\n";
    }

    cout<<price;
}
