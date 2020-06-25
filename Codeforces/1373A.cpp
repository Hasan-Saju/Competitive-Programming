#include<bits/stdc++.h>
using namespace std;

#define ll          long long
#define FOR(i,n)    for(int i=0;i<n;i++)


#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define NL          "\n"



int main()
{
    fast

    ll test;
    cin>>test;

    while(test--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll ans1=-1,ans2=-1;

        ll atot=a*b;
        if(c<atot)
            ans2=b;
        if(a<c)ans1=1;

        cout<<ans1<<" "<<ans2<<NL;
    }

}

