#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;

    ll field[n][n];

    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cin>>field[i][j];
        }
    }

    ll x = ( field[0][1]*field[0][2] )/field[1][2];     //ab*ac/bc=a^2
    x=sqrt(x);

    cout<<x<<" ";
    for(ll i=1;i<n;i++)
        cout<<field[0][i]/x<<" ";

}
