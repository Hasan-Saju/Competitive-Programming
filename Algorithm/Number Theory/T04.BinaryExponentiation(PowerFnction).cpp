#include<bits/stdc++.h>
using namespace std;

int power(int b,int p)
{
    int res=1;

    while(n)
    {
        if(p%2)             ///power bijor hole ans er sathe ekta base gun then power jor hoye gese
            res*=b, n--;

            b*=b, n/=2;     ///jor power prottek bar half and base square kortesi
    }
    return res;
}

///OR

ll POW(ll  B,ll P)
{
    ll R=1;
    while(P) {
        if(P&1)
            R=R*B;
        B=B*B;
        P>>=1;
    }
    return R;
}


int main()
{

}
