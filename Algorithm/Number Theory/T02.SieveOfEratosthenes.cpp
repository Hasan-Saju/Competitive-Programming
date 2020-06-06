#include<bits/stdc++.h>
using namespace std;
bool prime[90000001];

void sieve()
{
    int maxx=90000000;    //maxx porjonto prime ber korbo
    memset(prime,true,sizeof(prime));     //shob prime first a dhore nisi

    prime[0]=prime[1]=false;

    for(int i=2; i<=sqrt(maxx); i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i; j<=maxx; j=j+i)
                prime[j]=false;                 //era prime na
        }
    }

}

int main()
{

}
