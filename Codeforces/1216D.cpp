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
    ll total=0;
    ll n,m=0,x,i,nibeCount,manush;
    int perNise;
    cin>>n;
    vi v,nise;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
        m=max(m,x);
    }

     for(i=0;i<n;i++)
     {
         nibeCount=m-v[i];
         nise.pb(nibeCount);
         total+=nibeCount;
     }
    sort(nise.begin(),nise.end());

    perNise=__gcd(nise[0],nise[1]);
         for(i=2;i<n;i++)
         {
             perNise=__gcd(perNise,nise[i]);
         }

        manush=total/perNise;

        cout<<manush<<" "<<perNise;

}



