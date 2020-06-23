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
#define FOR(i,n)    for(ll i=0;i<n;i++)



#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);

#define NL          "\n"


int main()
{
    fast
    ll test;
    cin>>test;

    vector<ll> ques,dis;

    while(test--)
    {
        ll n,k;
        cin>>n>>k;




        FOR(i,n)
        {
            ll x;
            cin>>x;
            ques.pb(x);
        }


        FOR(i,k)
        {
            ll x;
            cin>>x;
            dis.pb(x);
        }


        sort(ques.begin(),ques.end());
        reverse(ques.begin(),ques.end());

        ll ans=0;

        sort(dis.begin(),dis.end());

        for(ll i=0;i<k;i++)
        {
            if(dis[i]==1)ans+=(2*ques[i]);
            else ans+=ques[i];

        }


       reverse(dis.begin(),dis.end());
        sort(ques.begin(),ques.end());
        ll j=0;

        for(ll i=0;i<k;i++)
        {
            if(dis[i]==1)continue;

            ans+=ques[j];
            j+= (dis[i]-2+1);
           // cout<<ans<<NL;
        }

        cout<<ans<<NL;

        ques.clear();
        dis.clear();

    }
}

