#include<bits/stdc++.h>
using namespace std;

#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);

int prime[5000001];
int fact[5000001];
int cumSum[5000001];

void sieve()
{
    int maxx=5000000;
    for(int i=2; i<=maxx; i++)
        if(i%2==0)
            prime[i]=2;
        else
            prime[i]=i;

    for(int i=3; i<=sqrt(maxx); i++)
    {
        if(prime[i]==i)
        {
            for(int j=i*i; j<=maxx; j+=i)
                if(prime[j]==j)
                    prime[j]=i;
        }
    }
}

void factors()
{
    fact[0]=0;
    fact[1]=0;
    fact[2]=1;

    for(int i=3; i<=5000000; i++)
    {
        int kount=0;
        int x=i;
        while(x!=1)
        {
            //cout<<prime[x]<<" ";
            kount++;
            x=x/prime[x];
        }
        fact[i]=kount;
    }

    for(int i=1;i<=5000000;i++)
        cumSum[i]=cumSum[i-1]+fact[i];
}

int main()
{
    fast
    sieve();
    factors();

    int t;
    cin>>t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<cumSum[a]-cumSum[b]<<"\n";
       // cout<<cumSum[a]<<" "<<cumSum[b]<<endl;
       // cout<<fact[a]<<" "<<fact[b]<<endl;
    }



}


