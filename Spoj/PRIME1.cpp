#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool rangeSieve[1000000];           //R-L+1 must be <=  10^6

void segmentedSieve(ll L, ll R)
{
    ll limit=sqrt(R);
    bool mark[limit+1];
    memset(mark,true,sizeof(mark));

    vector<ll>primes;

    mark[0]=mark[1]=false;

    primes.push_back(2);

    for(ll i=4; i<=limit; i+=2)
        mark[i]=false;

    for(ll i=3; i*i<=limit; i+=2)
    {
        if(mark[i])
        {
            for(ll j=i*i; j<=limit; j+=2*i)
                mark[j]=false;
        }
    }

    for(ll i=3; i<=limit; i++)
        if(mark[i])
            primes.push_back(i);

    //bool rangeSieve[R-L+1,true];
    memset(rangeSieve,true,sizeof(rangeSieve));
    for(auto i: primes)
    {
        for(ll j=max(i*i,((L+i-1)/i)*i); j<=R; j+=i)
            rangeSieve[j-L]=false;

    }
    if(L==1)
        rangeSieve[0]=false;

}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll L,R;
        cin>>L>>R;
        segmentedSieve(L,R);

        for(ll i=L; i<=R; i++)
            if(rangeSieve[i-L])
                cout<<i<<"\n";
        cout<<"\n";
    }

}


