#include<bits/stdc++.h>
using namespace std;


int phi(int n)
{
    int res = n;

    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            res=res*(i-1);          ///prime factor pailam (i-1) diye gun and i diye vag
            res=res/i;

            while(n%i==0)
                n/=i;
        }
    }
    if(n>1)
    res=res*(n-1), res=res/n;

    return res;
}




int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<"ETF("<<n<<") = "<<phi(n)<<endl;
    }
}


///Phi(N) = N* (p1-1)/p1 * (p2-1)/p2 *......* (pk-1)/pk    ///p gula holo prime factor
