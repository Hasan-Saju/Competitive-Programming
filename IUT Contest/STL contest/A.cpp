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

    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"Case "<<i+1<<":"<<endl;
        int n,m,j,x,y;
        char c;
        vector<ll>v;
        cin>>n>>m;
        for(j=0;j<n;j++)
        {
            cin>>x;
            v.pb(x);

        }
        for(j=0;j<m;j++)
        {
            cin>>c;
            if(c=='R')
            {
                reverse(v.begin(),v.end());
            }
            else if(c=='P')
            {
                cin>>x>>y;
                swap(v[x],v[y]);
            }
            else if(c=='D')
            {
                cin>>x;
                FOR(j,n)
                {
                    v[j]/=x;
                }
            }
            else if(c=='S')
            {
                 cin>>x;
                FOR(j,n)
                {
                    v[j]+=x;
                }
            }
            else if(c=='M')
            {
                 cin>>x;
                FOR(j,n)
                {
                    v[j]*=x;
                }
            }
        }
        FOR(j,n)
        {

            cout<<v[j];
            if(j!=n-1)cout<<" ";
        }
        cout<<endl;
    }
}
