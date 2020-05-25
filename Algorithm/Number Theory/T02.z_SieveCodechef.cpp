#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool prime[90000001];
vector<ll>plist;

void sieve()
{
    ll maxx=90000000;

    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;

    for(ll i=2;i<=sqrt(maxx);i++)
    {
        if(prime[i])
        {
            for(int j=i*i; j<=maxx; j+=i)
                prime[j]=false;
        }
    }

    for(ll i=2; i<=maxx; i++)
        if(prime[i])
        plist.push_back(i);

}

int main()
{


    ll q;
    cin>>q;

    sieve();

    for(int p=0;p<q;p++)
    {
        ll x;
        cin>>x;
        cout<<plist[x-1]<<endl;
    }
}

///problem link
///https://www.spoj.com/problems/TDKPRIME/

