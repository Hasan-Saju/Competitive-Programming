#include<bits/stdc++.h>
using namespace std;

#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long

vector<ll>v;
ll n,k;

bool check( ll x )
{
    ll moves=0;
    for(ll i=n/2;i<n;i++)
    {
        if(x-v[i]>=0)moves+= (x-v[i]);
        if(moves>k)return false;
    }
    if(moves<=k) return true;
    else return false;
}

int main()
{
    fast
    cin>>n>>k;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.emplace_back(x);
    }

    sort(v.begin(),v.end());

    ll left=1,right=v[n-1]+k,ans=0;

    while(left<=right)
    {
        ll mid= (left+right)/2;
        //cout<<left<<" "<<right<<" "<<mid<<"\n";
        if(check(mid))
        {
            ans=mid;
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }

    }

    cout<<ans;

}
