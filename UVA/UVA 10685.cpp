#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define ff          first
#define ss          second
#define vi          vector<int>
#define si          set<int>
#define FOR(i,n)    for(int i=0;i<n;i++)
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define SP(x)       fixed<<setprecision(x)
#define fWrite      freopen("out.txt", "w", stdout);//to write the output in a txt file
#define fRead       freopen("in.txt", "r", stdin);
#define asi         cout<<"Check"<<endl
#define bye         return 0
#define ok          cout<<"OK"<<endl
//lower_bound == Shoman othoba prothom boro element ta return korbe//iterator return kore
//upper bound mane first boro element return korbe
//string s(n,'a');

int ara[5005];
int parent[5005];
int node,edge;

void makeset(int n)
{
    parent[n]=n;
}

int Find(int representative)
{

    if(parent[representative]==representative)
    {
        return representative;
    }

    else return Find(parent[representative]);

}

void Union(int a,int b)
{
    int u=Find(a);
    int v=Find(b);
    if(u!=v)
    {
        parent[u]=v;
        ara[v]+=ara[u];
    }

}


int main()
{
    fast
    //fWrite
    while(cin>>node>>edge)
    {
        if(!node and !edge)break;
        map<string,int>mp;

        for(int j=0;j<node;j++)
        {
            string s;
            cin>>s;
            mp[s]=j;
            ara[j]=1;
            makeset(j);
        }

        for(int j=0;j<edge;j++)
        {
            string f,s;
            cin>>f>>s;

            int x=mp[f];
            int y=mp[s];

            Union(x,y);
        }

        int maxx=0;
        for(int j=0;j<node;j++)
        {
            maxx=max(maxx,ara[j]);
        }
        cout<<maxx<<endl;

        mp.clear();
    }
    return 0;
}
