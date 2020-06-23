#include<bits/stdc++.h>
using namespace std;

int prime[100001];
int ans[100001];
void sieve()
{
    int maxx=100000;
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

    int x=1;
    for(int i=2;i<=maxx;i++)
    {
        if(prime[i]==i)
            ans[i]=x, x++;
    }

}

int main()
{
    sieve();

    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
        cout<<ans[prime[i]]<<" ";
}
