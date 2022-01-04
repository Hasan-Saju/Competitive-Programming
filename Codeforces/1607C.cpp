#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        vector<ll>v;
        ll n;
        cin>>n;

        for(int j=0;j<n;j++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());

        vector<ll>ans(n);

        for(int j=1;j<n;j++)
        {
            ans[j]=v[j]-v[j-1];
        }
        sort(ans.begin(),ans.end());

        if(v.size()==1)
            cout<<v[0]<<"\n";
        else
        cout<<max(v[0],ans[n-1])<<"\n";

    }
}
