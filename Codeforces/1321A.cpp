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
    int wtotal=0,ltotal=0,flag=0,aflag=0,pointGap=0,kount=0,ans=0,cflag=0,k=0;
    bool impossible=false;
    int win[105],loose[105];
    memset(win,0,sizeof(win));
    memset(loose,0,sizeof(loose));

    int n;
    cin>>n;
    FOR(i,n)
    {
        cin>>win[i];
        wtotal+=win[i];
    }

    FOR(i,n)
    {
        cin>>loose[i];
        ltotal+=loose[i];
    }
    if(wtotal>ltotal)
    {
        cout<<"1";
        return 0;
    }
    FOR(i,n)
    {
        if(win[i]!=loose[i])
            flag=1;
            if(loose[i]==0)
                aflag=1;
                if(win[i]==1&&loose[i]==0)kount++;
                if(loose[i]==0)cflag=1;
                if(win[i]==0&&loose[i]==0)
                {
                    k++;
                }
    }

    if(!flag)impossible=true;
    if(!aflag)impossible=true;
    if(!cflag)impossible=true;
    if(impossible==true)
    {
        cout<<"-1";
       // cout<<endl<<flag<<" "<<aflag;

        return 0;
    }
     if(k==n)
    {
        cout<<"1";
        return 0;
    }

    pointGap=ltotal-wtotal+1;
   if(wtotal==0)cout<<pointGap+1;
    ans=pointGap/kount;
    if(pointGap%kount!=0)ans+=1;
    cout<<ans+1;
  //  cout<<endl<<kount;



}

