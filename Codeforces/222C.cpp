#include<bits/stdc++.h>
using namespace std;
#define ll long long

int prime[10000001];
int up[10000001];
int down[10000001];

void sieve()
{
    int maxx=10000000;
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


ll POW(ll  B,ll P)
{
    ll R=1;
    while(P)
    {
        if(P&1)
            R=R*B;
        B=B*B;
        P>>=1;
    }
    return R;
}

vector<int> primeList(int x)
{
    vector<int>temp;
    while(x!=1)
    {
        temp.push_back(prime[x]);
        x/=prime[x];
    }
    return temp;
}

int main()
{
    sieve();
    int n,m;
    cin>>n>>m;

    vector<int>qu;
    vector<int>qd;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        qu.push_back(x);

        while(x!=1)
        {
            up[prime[x]]++;
            x/=prime[x];
        }
    }

    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        qd.push_back(x);

        while(x!=1)
        {
            down[prime[x]]++;
            x/=prime[x];
        }
    }


    for(int i=2; i<=10000000; i++)
    {
        if(up[i]>down[i])
        {
            int koyta=up[i]-down[i];
            up[i]=koyta;
            down[i]=0;

        }
        else if(down[i]>up[i])
        {
            int koyta=down[i]-up[i];
            down[i]=koyta;
            up[i]=0;

        }
        else
            down[i]=0,up[i]=0;
    }

    vector<int>u;   //for ans
    vector<int>d;   //for ans
    vector<int>temp;

    for(auto x:qu)
    {
        temp = primeList(x);
        int num=1;

        for(auto z:temp)
        {
            if(up[z]>0)
            {
                up[z]--;
                num*=z;
            }
        }
        u.push_back(num);
    }
    for(auto x:qd)
    {
        temp = primeList(x);
        int num=1;

        for(auto z:temp)
        {
            if(down[z]>0)
            {
                down[z]--;
                num*=z;
            }
        }
        d.push_back(num);
    }


    cout<<u.size()<<" "<<d.size()<<"\n";
    for(auto x:u )
        cout<<x<<" ";
    cout<<"\n";
    for(auto x:d )
        cout<<x<<" ";



}
