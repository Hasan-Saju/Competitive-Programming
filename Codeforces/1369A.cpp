#include<bits/stdc++.h>
using namespace std;

#define ll          long long
#define ull         unsigned long long
#define pb          push_back
#define mp          make_pair
#define ff          first
#define ss          second
#define vi          vector<int>
#define si          set<int>
#define pi          pair<int,int>
#define FOR(i,n)    for(int i=0;i<n;i++)



#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);

#define NL          "\n"

int main()
{
    fast
    ll t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        if(x%4==0)
            cout<<"YES"<<NL;
        else
            cout<<"NO"<<NL;
    }
}
