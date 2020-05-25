#include<bits/stdc++.h>
using namespace std;

bool prime[10001];

void sieve()
{
    int maxx=10000;
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;

    for(int i=2; i<=sqrt(maxx); i++)
    {
        if(prime[i])
        {
            for(int j=i*i; j<=maxx; j+=i)
                prime[j]=false;
        }
    }

}

int main()
{
    sieve();

    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
        if(prime[i])cout<<i<<" ";
}
