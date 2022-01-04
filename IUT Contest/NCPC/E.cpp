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
    ll t,s,p,ans,payNai;
    cin>>t;
    while(t--)
    {
        cin>>s>>p;
        if(p>=s)cout<<"0"<<endl;
        else {
            payNai=s-p;
            if(payNai%6!=0)ans=(payNai/6)+1;
            else ans=payNai/6;
         cout<<ans<<endl;
        }

    }

}

