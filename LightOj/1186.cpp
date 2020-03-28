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

    int t,i,j,n,ans,diff;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        cin>>n;
        int w[n+10];
        int b[n+10];
        memset(w,0,sizeof(w));
        memset(b,0,sizeof(b));
        ans=0;

        for(i=0;i<n;i++)
        {
            cin>>w[i];
        }

         for(i=0;i<n;i++)
        {
            cin>>b[i];
        }

         for(i=0;i<n;i++)
        {
            diff=abs(b[i]-w[i])-1;
            ans^=diff;
        }

        cout<<"Case "<<j<<": ";
        if(ans==0)cout<<"black wins"<<endl;
        else cout<<"white wins"<<endl;

    }

}

