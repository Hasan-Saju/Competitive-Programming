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
    int t;
    int i,n,r,u,x,y;
    cin>>t;
    string ans;
    bool AnsP=false;
    vector<pair<int,int> >v;
    pair<int,int> check=mp(0,0);
    while(t--)
    {


        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>x>>y;
            v.pb(mp(x,y));
        }
        sort(v.begin(),v.end());

//cout<<ans<<endl;
        for(i=0; i<n; i++)
        {
            r=v[i].ff-check.ff;
            u=v[i].ss-check.ss;
            if(r<0||u<0)
            {
                cout<<"NO"<<endl;
                AnsP=true;
                break;
            }
            ans+=string(r,'R');
            ans+=string(u,'U');
            check=v[i];
            //cout<<ans<<endl;
        }
        if(AnsP==false)
            cout<<"YES"<<endl<<ans<<endl;
        v.clear();
        AnsP=false;
        ans.clear();
        check=mp(0,0);

    }
}

