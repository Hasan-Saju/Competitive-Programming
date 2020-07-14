#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    fast
    ll n;
    cin>>n;
    vector<ll>a,b,c(n);

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        b.push_back(x);
    }
    for(int i=0;i<n;i++)
        c[i]=a[i]-b[i];

    sort(c.begin(),c.end());

    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(c[i]<=0)continue;
        int pos= lower_bound(c.begin(),c.end(),-c[i]+1)-c.begin();
        ans+= (i-pos);
       // cout<<i<<" "<<ans<<" "<<pos<<"\n";
    }
    cout<<ans;

}
