#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll v[205][205];
ll n,m;


int main()
{
    ll t;
    cin>>t;

    for(ll i=0; i<t; i++)
    {
        cin>>n>>m;

        for(ll j=0; j<n; j++)
        {
            for(ll k=0; k<m; k++)
            {
                ll x;
                cin>>x;
                v[j][k]=x;
            }
        }

        ll result=INT_MIN;
        int x,y;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                ll ans=0;
                x=i, y=j;

                while(x<n and y<m)
                {
                    ans+= v[x][y];
                    x++;
                    y++;
                }

                x=i, y=j;
                while(x>=0 and y>=0)
                {
                    ans+= v[x][y];
                    x--;
                    y--;
                }

                x=i, y=j;
                while(x<n and y>=0)
                {
                    ans+= v[x][y];
                    x++;
                    y--;
                }

                x=i, y=j;
                while(x>=0 and y<m)
                {
                    ans+= v[x][y];
                    x--;
                    y++;
                }

                ans-= 3*v[i][j];
                result=max(result,ans);

            }
        }

        cout<<result<<"\n";
    }
}
