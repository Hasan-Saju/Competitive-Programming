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
//int oi[15],lc[15];
int main()
{
    int oi[15],lc[15];
    memset(oi,0,sizeof(oi));
    memset(lc,0,sizeof(lc));
    int x,y,i,j,n,t,sus=0,p,q,d;
    char c;
    vi v;
    cin>>t;
    for(d=0;d<t;d++)
    {

    cin>>n;
    for(i=0; i<n; i++)
    {
        sus=0;
        cin>>x>>y>>c;
        if(y==0&&c=='i')
        {
            oi[x]+=1;
        }
        else if(y==1&&c=='c')
        {
            lc[x]++;
        }
    }
    for(p=1;p<=9;p++)
    {
        for(q=p+1;q<=10;q++)
        {
            sus+=oi[p]*lc[q];
        }
    }
    cout<<sus<<endl;
    memset(oi,0,sizeof(oi));
    memset(lc,0,sizeof(lc));

    }

}



