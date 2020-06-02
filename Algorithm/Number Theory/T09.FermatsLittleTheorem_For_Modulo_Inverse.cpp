/*
    gcd(a,m)=1 chara modulo inverse ber kora jay na
    a^(m-1)= 1 mod m , where m must be a prime and gcd(a,m)=1
    (a^(m-1)) mod m = 1 mod m
    == a^(m-2)= a^-1 (a inverse) mod m
    a^(m-2)mod m = a inverse (m must be prime)
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long


ll BMod(ll B,ll P,ll M)
{
    ll R=1;
    B=B%M;
    while(P)
    {
        if(P&1)
            R=(R*B)%M;
        P >>= 1;
        B=(B*B)%M;
    }
    return R;
}


int main()
{
    int t,a,b,m;
    cin>>t;
    while(t--)
    {
        cin>>a>>m; // find a inverse modulo m
        cout<<"a^-1 (a inverse is): "<<BMod(a,m-2,m)<<endl;
    }
}
///property of modulo inverse
/// a * inverse of a ==1
