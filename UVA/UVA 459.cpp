#include<bits/stdc++.h>
using namespace std;

const int N=50;
vector<int>V[N];
bool vis[N];
#define fWrite      freopen("out.txt", "w", stdout);

void dfs(int s)
{
    vis[s]=true;
    for(auto x:V[s] )
    {
        if(vis[x])
            continue;
        dfs(x);
    }
}

int main()
{

    //fWrite
    int t;
    scanf("%d\n",&t);
    bool spac=false;
    while(t--)
    {
        //cin.ignore();
        if(spac)
        printf("\n");
        memset(vis,false,sizeof(vis));
        char big[2];
        gets(big);
        int mx=big[0]-'A';

        char temp[3];
        while(gets(temp))
        {
            if(temp[0]=='\0')break;

            V[temp[0]-'A'].push_back(temp[1]-'A');
            V[temp[1]-'A'].push_back(temp[0]-'A');
            //cout<<"ok\n";
        }


        int ans=0;
        for(int i=0;i<=mx;i++)
        {
            if(vis[i])
                continue;
            ans++;
            dfs(i);
        }

        printf("%d\n",ans);
        spac=true;


        for(int i=0;i<26;i++)
            V[i].clear();
    }


}
