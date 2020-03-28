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
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,n,sum=0,per=0,pera=0,perb=0,perc=0;
    cin>>a>>b>>c>>n;

    sum=a+b+c+n;
    per=sum/3;
    //if(a>per||b>per||c>per)cout<<"NO"<<endl;

    pera=per-a;
    perb=per-b;
    perc=per-c;
    if((pera+a==perb+b)&&(perb+b==perc+c)&&(sum%3==0)&&(pera+perb+perc)==n&&(pera+a==per)&&(a<=per)&&(b<=per)&&(c<=per))
    {
        cout<<"YES"<<endl;//<<pera<<perb<<perc<<sum<<per;

    }
 //  else if(sum%3==0
    else cout<<"NO"<<endl;
   // cout<<"YES"<<endl<<pera<<" "<<perb<<" "<<perc<<" "<<sum<<" "<<per;

    }

}



