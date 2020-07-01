#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define ll long long
#define NL "\n"
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    fast
    ll n,r,avg;
    cin>>n>>r>>avg;

    vector<ll>f,s;
    ll sum=0;

    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>> >pq;

    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        pq.push({b,a});
        sum+=a;
    }

    int Av=sum/n;
    if(Av>=avg)
    {
        cout<<"0"<<NL;
        return 0;
    }

    ll shortage=avg*n-sum;

    pair<ll,ll>temp;
    ll essay=0;

    while(shortage>0)
    {
        temp=pq.top();
        pq.pop();

        int mn=min(r-temp.ss,shortage);
        essay+= mn*temp.ff;
        shortage-= mn;

        //cout<<shortage<<NL;
    }


    cout<<essay;

}
