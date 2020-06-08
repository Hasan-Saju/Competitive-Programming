#include<bits/stdc++.h>
using namespace std;


/*(number of integers which GCD(x,N)==d)
    number of integers which GCD(x/d,N/d)==1 means co prime
    number of integers co prime with N/d
    Phi(N/d)
*/

int phi[1000001];

void ETF_Calculation()
{
    int maxN=1000000;
    for(int i=1;i<=maxN;i++)
        phi[i]=i;

    for(int i=2;i<=sqrt(maxN);i++)
    {
        if(phi[i]==i)
        {
            for(int j=i; j<=maxN; j+=i)
            {
                phi[j]*=(i-1);
                phi[j]/=i;
            }
        }
    }
}


int getCount(int d, int N)
{
    return phi[N/d];
}

int main()
{
    ETF_Calculation();
    int q,N;            ///q=queries, n=sum of GCD(i,N) i=1 theke i=N
    cin>>q;
    while(q--)
    {
        cin>>N;
        int res=0;

        for(int i=1; i<=sqrt(N); i++)
        {
            if(N%i==0)
            {
                int d1=i;
                int d2=N/i;

                res+= d1*getCount(d1,N);        ///getCount = (number of integers which GCD(x,N)==d1) koytar gcd d1 oita return korbe

                if(d1!=d2)
                res+= d2*getCount(d2,N);

                //cout<<d1<<" "<<getCount(d1,N)<<endl;
                //cout<<d2<<" "<<getCount(d2,N)<<endl;
            }
        }
        cout<<"Sum of Gcd is: "<<res<<endl;
    }
}
