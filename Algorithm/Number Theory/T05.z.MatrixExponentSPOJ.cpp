#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long

#define N 101
ll ara[N][N], I[N][N];     //ara is for storing ans

void MatMul(ll A[][N], ll B[][N], ll dim)
{
    ll res[dim+1][dim+1];


    for(ll i=1;i<=dim;i++)
    {
        for(ll j=1;j<=dim; j++)
        {
            res[i][j]=0;
            for(ll k=1; k<=dim; k++)
                res[i][j] = ( res[i][j] + ( A[i][k]*B[k][j] )%mod )%mod;
        }
    }

    for(ll i=1;i<=dim;i++)
    {
        for(ll j=1;j<=dim; j++)
        {
            A[i][j]=res[i][j];      //A er operation mane I er operation
        }
    }


}


void MatPow( ll A[][N], ll dim, ll n)    //eikhane ar passs korsilam so A te ja hobe ta ara te hobe
{

    for(ll i=1; i<=dim; i++)                   //Identity create
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

//    for(ll i=1; i<=n; i++)
//        MatMul(I,A,dim);            //I=I*A;

    while(n)
    {
        if(n%2==1)
            MatMul(I,A,dim),  n-- ;     //res a rakhsi mane I te

        MatMul(A,A,dim), n=n/2;         //base ba main matrix square korsi power half
    }

     for(ll i=1; i<=dim; i++)
            for(ll j=1; j<=dim; j++)
                A[i][j]=I[i][j];            //A mane ara= ara te ans nei



}

void PrintMat(ll A[][N], ll dim)
{
    for(ll i=1; i<=dim; i++)                   //Identity create
    {
        for(ll j=1; j<=dim; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

///Complexity : Dim^3 * logN

int main()
{
    ll t,dim,n;            //dime - dimension  //n- power
    cin>>t;                 // test case
    while(t--)
    {
        cin>>dim>>n;

        for(ll i=1; i<=dim; i++)
            for(ll j=1; j<=dim; j++)
                cin>>ara[i][j];


        MatPow(ara,dim,n);
        PrintMat(ara,dim);
    }
}


///problem link
///https://www.spoj.com/problems/MPOW/

