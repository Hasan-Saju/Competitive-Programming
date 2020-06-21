#include<bits/stdc++.h>
using namespace std;

bool prime[100009];

void sieve()
{
    int maxx=100005;
    memset(prime,true,sizeof(prime));

    prime[0]=prime[1]=false;

    for(int i=4;i<=maxx;i+=2)
        prime[i]=false;

    for(int i=3; i*i<=maxx; i+=2)
    {
        if(prime[i]==true)
        {
            for(int j=i*i; j<=maxx; j+=2*i)
                prime[j]=false;
        }
    }

}

int main()
{
    int n;
    cin>>n;
    sieve();
    if(n<=2)
    cout<<"1\n";
    else
        cout<<"2\n";
    for(int i=0;i<n;i++)
    {
        if(prime[i+2])
            cout<<"1 ";
        else
            cout<<"2 ";
    }
}
