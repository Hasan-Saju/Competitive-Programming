#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll>divi;
vector<ll>check;
map<ll,ll>h;

void pre(ll n)
{

    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0 and i!=(n/i) )
            divi.emplace_back(i), divi.emplace_back(n/i), h[i]=1, h[n/i]=1;
        else if(n%i==0)divi.emplace_back(i), h[i]=1;
    }

    sort(divi.begin(),divi.end());
    check=divi;
    reverse(divi.begin(),divi.end());

}


int main()
{
    ll n;
    cin>>n;
    pre(n);

    for(auto x:divi )
    {
        int flag=0;
        for(ll i=2;i*i<=x;i++)
        {
            if(x%i==0 and (x%(i*i)==0) )
            {
                flag=1;
                break;
            }
        }
          if(!flag)
            {
                cout<<x;
                return 0;
            }

    }



}










