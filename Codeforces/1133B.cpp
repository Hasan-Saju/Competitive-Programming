#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);

int ara[101];
bool flag[101];

int main()
{
    ll n,k;
    cin>>n>>k;

    memset(ara,0,sizeof(ara));

    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        ara[x%k]++;
    }
    int ans=0;

    for(int i=0; i<k; i++)
    {
        for(int j=i; j<k; j++)
        {
            if((i+j)%k==0)
            {
                int mn=min(ara[i],ara[j]);
                if(i==j and mn%2!=0)
                    mn--;
                if(i!=j)
                ans+=2*mn;
                else
                    ans+=mn;
                ara[i]-=min(ara[i],ara[j]);
                ara[j]-=min(ara[i],ara[j]);

            }
        }
    }
    cout<<ans;
}
