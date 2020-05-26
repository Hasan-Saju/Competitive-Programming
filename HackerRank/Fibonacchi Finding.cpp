#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define N 101
ll ara[N][N], I[N][N];
#define mod 1000000007

void MatMul(ll A[][N], ll B[][N], ll dim)
{
    ll res[dim+1][dim+1];


    for(ll i=1; i<=dim; i++)
    {
        for(ll j=1; j<=dim; j++)
        {
            res[i][j]=0;
            for(ll k=1; k<=dim; k++)
                res[i][j] = (res[i][j] + (A[i][k]*B[k][j])%mod)%mod;
        }
    }

    for(ll i=1; i<=dim; i++)
    {
        for(ll j=1; j<=dim; j++)
        {
            A[i][j]=res[i][j];
        }
    }


}


void MatPow( ll A[][N], ll dim, ll n)
{

    for(ll i=1; i<=dim; i++)
    {
        for(ll j=1; j<=dim; j++)
        {
            if(i==j)
                I[i][j]=1;
            else
                I[i][j]=0;
        }
    }

//FOR(i,n)I=I*A

//    for(int i=1; i<=n; i++)
//        MatMul(I,A,dim);            //I=I*A;

    while(n)
    {
        if(n%2==1)
            MatMul(I,A,dim),  n-- ;

        MatMul(A,A,dim), n=n/2;
    }

    for(ll i=1; i<=dim; i++)
        for(ll j=1; j<=dim; j++)
            A[i][j]=I[i][j];



}


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;

        if(n==0)
        {
            cout<<a<<endl;
            continue;
        }
        else if(n==1)
        {

            cout<<b<<endl;
            continue;
        }

        for(ll i=1; i<=2; i++)
        {
            for(ll j=1; j<=2; j++)
                if(i==1 and j==1)
                    ara[i][j]=0;
                else
                    ara[i][j]=1;
        }

        MatPow(ara,2,n);

        ll ans= ((b* ara[2][1])%mod + (a*ara[1][1])%mod)%mod;
        cout<<ans<<endl;
        memset(ara,0,sizeof(ara));
        memset(I,0,sizeof(I));


    }
}
