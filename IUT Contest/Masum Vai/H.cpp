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
    int match,goal,i,disi,khaisi;
    //cin>>match>>goal;
    while(scanf("%d %d",&match,&goal)==2)
    {
        // cout<<match<<" "<<goal<<endl;
        int lost[110],ans=0;
        memset(lost,0,sizeof(lost));
        for(i=1; i<=match; i++)
        {
            scanf("%d%d",&disi,&khaisi);
            if(disi>khaisi)
                ans+=3;
            else if(disi==khaisi)
            {
                if(goal>0)
                {
                    ans+=3;
                    goal--;
                    //  cout<<ans<<" ";
                }
                else
                    ans++;
            }
            else
                lost[khaisi-disi]++;
        }

        if(goal>0)
        {
            for(i=1; i<105; i++)
            {
                while(goal>=i&&lost[i]>0)
                {
                    if(goal>i)
                    {
                        ans+=3;
                        goal=goal-(i+1);
                    }
                    else
                    {
                        ans++;
                        goal=goal-i;
                    }
                    lost[i]--;
                }
            }
        }
        printf("%d\n",ans);
    }
}

