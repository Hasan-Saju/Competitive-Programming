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
int ara[150][150];
int main()

{
    int n,i,j,ii,jj,ans=0,sum=0,t=0,p;
    cin>>t;
    for(p=0;p<t;p++)
    {
        ans=0;

    cin>>n;
    FOR(i,n)
    FOR(j,n)cin>>ara[i][j];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            ii=i;
            jj=j;
            sum=0;
            while(ii<n&&jj<n)
            {
                sum+=ara[ii][jj];
                ii++;
                jj++;
            }
            ans=max(ans,sum);
        }

    }
    cout<<ans<<endl;
    }
}



