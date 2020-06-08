#include<bits/stdc++.h>
using namespace std;

int phi[1000001];       ///to store number of phi in each index

void ETF_Calculation(int maxN)
{
    int maxN=1000000;

    for(int i=1;i<=maxN;i++)
        phi[i]=i;

    for(int i=2;i<=sqrt(maxN);i++)      ///my modification
    {
        if(phi[i]==i)               ///that means is a prime
        {
            for(int j=i; j<=maxN; j+=i)
            {
                phi[j]*=(i-1);          /// (p-1)diye gun, p diye vag
                phi[j]/=i;
            }
        }
    }
}


int main()
{
    ETF_Calculation();
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        cout<<"Phi of "<<n<<" is: "<<phi[n]<<endl;
    }
}
