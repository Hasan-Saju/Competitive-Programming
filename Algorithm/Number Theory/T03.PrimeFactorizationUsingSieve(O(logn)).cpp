#include<bits/stdc++.h>
using namespace std;

int prime[1000001];

void sieve()
{
    int maxx=1000000;
    for(int i=2; i<=maxx; i++)
        if(i%2==0)
            prime[i]=2;                 //mane 2 er gunoniyok er man 2
        else
            prime[i]=i;                 //mane nijer index a nijer value, dhori egula prime

    for(int i=3; i<=sqrt(maxx); i++)
    {
        if(prime[i]==i)                    //jodi equal hoy mane prime
        {
            for(int j=i*i; j<=maxx; j+=i)
                if(prime[j]==j)                 //mane age karo gunitok hoy nai
                    prime[j]=i;                 //i er gunitok
        }
    }
}

int main()
{
    sieve();
    int x;
    cin>>x;
    cout<<"factors are: ";

    while(x!=1)
    {
        cout<<prime[x]<<" ";
        x=x/prime[x];
    }

}

//better to use to answer multiple queries
