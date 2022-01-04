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
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);


int main()
{
    fast
    //freopen("out.txt", "w", stdout);    //to write the output in a txt file
    //freopen("in.txt", "r", stdin);
    int t,i,x,sum=0,ans=0,mean;
    cin>>t;
    while(t!=-1)
    {
        vector<int>v;
        sum=0;
        ans=0;
        for(i=0;i<t;i++)
        {
            cin>>x;
            v.pb(x);
            sum+=x;
        }
        mean=sum/t;
        if(sum%t==0)
        {
            for(i=0;i<v.size();i++)
            {
                if(mean>v[i])
                {
                    ans+=mean-v[i];
                }
            }
            cout<<ans<<endl;
        }
        else
            {
                cout<<"-1"<<endl;

            }
            cin>>t;
            v.clear();
    }



}


