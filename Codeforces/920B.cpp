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
    int t,n,i,x,y,check=0;
    cin>>t;
    vector<pair<int,int> >vp;
    while(t--)
    {
        cin>>n;
        FOR(i,n)
        {
           cin>>x>>y;
           vp.pb({x,y});
        }
        cout<<vp[0].ff<<" ";
        check=vp[0].ff;
        for(i=1;i<n;i++)
        {
            if(check>=vp[i].ss)cout<<"0"<<" ";
            else{
                cout<<max(check+1,vp[i].ff)<<" ";
                check=max(check+1,vp[i].ff);
            }
        }
        cout<<endl;
        vp.clear();

    }
}

