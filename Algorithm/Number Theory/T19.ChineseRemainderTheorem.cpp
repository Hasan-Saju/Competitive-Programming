#include<bits/stdc++.h>
using namespace std;

#define ll long long
//ax+my=1
//if gcd(a,m)=1 then ans exist

int extendedGCD(int a, int m, int &x, int &y)
{
    if(m==0)
    {
        x=1;
        y=0;
        return a;
    }
    int x1,y1;
    int ans=extendedGCD(m, a%m, x1, y1);

    x=y1;
    y=x1-y1*(a/m);

    return ans;
}

int inverse(int a, int mod)
{
    int x,y;
    extendedGCD(a,mod,x,y);
    return (x%mod+mod)%mod;
}

int CRT(int rem[], int num[],int n)
{
    int product=1;
    for(int i=0;i<n;i++)
        product*=num[i];

    int result=0;

    for(int i=0;i<n;i++)
    {
        int temp= product/num[i];
        result += rem[i]*inverse(temp,num[i])*temp;
    }

    return result%product;

}

//numgula shobgular gcd() 1 howa lage CRT r jonno

int main()
{
    int rem[100];
    int num[100];

    int n;
    cin>>n;     //number of equations

    for(int i=0;i<n;i++)
    {
        cin>>rem[i];
    }
    int product=1;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];

    }

    cout<<CRT(rem,num,n);
}


///https://www.youtube.com/watch?v=zIFehsBHB8o
///CRT tutorial
///https://cp-algorithms.com/algebra/module-inverse.html
///inverse theory
