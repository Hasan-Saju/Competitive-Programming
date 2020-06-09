#include<bits/stdc++.h>
using namespace std;

bool prime[1000001];
vector<int>primelist;

void sieve()
{
    int maxx=1000000;
    memset(prime,true,sizeof(prime));

    prime[0]=prime[1]=false;

    for(int i=4; i<=maxx; i+=2)
        prime[i]=false;

    for(int i=3; i*i<=maxx ; i+=2)
    {
        if(prime[i]==true)
        {
            for(int j=i*i; j<=maxx; j+=2*i)
                prime[j]=false;
        }
    }

    primelist.push_back(2);
    for(int i=3; i<=maxx; i+=2)
        if(prime[i])
            primelist.push_back(2);


}

int divisor(int N)
{
    int kount=0,sum=1;

    for(int i=0; i<primelist.size() and primelist[i]*primelist[i]<= N ; i++)
    {
        if(N%primelist[i]==0)
        {
            kount=0;

            while(N%primelist[i]==0)
                kount++, N/=primelist[i];

            if(kount!=0)
                sum*=(kount+1);
        }
    }

    if(N>1)
        sum*=2;

    return sum;
}


int main()
{
    sieve();

    int n;
    cin>>n;
    cout<<"Total Divisors: "<<divisor(n);

}

