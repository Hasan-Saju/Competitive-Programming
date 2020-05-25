#include<bits/stdc++.h>
using namespace std;

bool prime[1000001];
int ans[1000001];

void sieve()
{
    int maxx=1000000;
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

    int kount=0;
    for(int i=2; i<=maxx; i++)
    {
        if(prime[i])
            kount++;

        if(prime[kount])
            ans[i]=1;
        else
            ans[i]=0;
    }
    for(int i=1; i<=maxx; i++)
        ans[i]=ans[i]+ans[i-1];


}


int main()
{
    sieve();

    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int f= ans[r]-ans[l-1];
        cout<<f<<endl;

    }

}


///problem link
///https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/micro-and-prime-prime-1/description/?layout=old
