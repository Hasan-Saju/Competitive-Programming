#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define si set<int>
#define FOR(i,n) for(int i=0;i<n;i++)
int main()
{
    int t,n,extra=0,roundTaka=0,khoroch=0,cashBack=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        extra=0,roundTaka=0,khoroch=0,cashBack=0;
        while(true)
        {
        roundTaka=n-n%10;
        extra=n%10;
        khoroch=khoroch+roundTaka;
        cashBack=roundTaka/10;
        n=cashBack+extra;
       // cout<<n<<" "<<roundTaka<<" "<<extra<<" "<<khoroch<<" "<<cashBack<<endl;
        if(n/10==0)
        {
            khoroch+=n;
         //   cout<<extra<<endl;
            break;
        }

        }
       cout<<khoroch<<endl;
    }

}

