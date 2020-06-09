#include<bits/stdc++.h>
using namespace std;
bool prime[90000001];

void sieve()
{
    int maxx=90000000;    //maxx porjonto prime ber korbo
    memset(prime,true,sizeof(prime));     //shob prime first a dhore nisi

    prime[0]=prime[1]=false;

    for(int i=4;i<=maxx;i+=2)
        prime[i]=false;

    for(int i=3; i*i<=maxx; i+=2)
    {
        if(prime[i]==true)
        {
            for(int j=i*i; j<=maxx; j+=2*i)
                prime[j]=false;                 //era prime na
        }
    }

}

int main()
{

}
