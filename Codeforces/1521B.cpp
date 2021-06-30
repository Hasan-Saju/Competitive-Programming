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

        ll mn=LONG_MAX;
        int pos=-1;

        for(int j=0;j<n;j++)
        {
            ll x;
            cin>>x;
            v.push_back(x);

            if(x<=mn)
                mn=x,pos=j;

        }

        cout<<n-1<<"\n";

        for(int j=0;j<n;j++)
        {
            if(j==pos)
                continue;
            cout<<j+1<<" "<<pos+1<<" "<<mn+abs(j-pos)<<" "<<mn<<"\n";
        }

    }
}
