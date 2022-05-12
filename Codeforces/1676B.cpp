#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<ll>v;
        for(int j=0;j<n;j++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        ll eat=0;
        for(int j=0;j<n;j++)
        {
            eat+= (v[j]-v[0]);
        }
        cout<<eat<<"\n";
    }
}
