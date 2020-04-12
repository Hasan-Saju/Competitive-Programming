#include<bits/stdc++.h>
using namespace std;
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fWrite      freopen("out.txt", "w", stdout);

int parent[900000];
int ara[900000];

void makeset(int n)
{
    parent[n] = n;
}

int Find(int representative)
{

    if(parent[representative] == representative)
    {
        return representative;
    }

    else
       return parent[representative] = Find(parent[representative]);

}

int Union(int a, int b)
{
    int u = Find(a);
    int v = Find(b);
    if(u != v)
    {
        parent[u] = v;
        ara[v] += ara[u];
    }
    return ara[v];
}


int main()
{
    fast
   // fWrite

    int t,edge;
    cin>>t;
    while(t--)
    {
        string f, s;
        map<string, int>mp;
        mp.clear();
        memset(ara,0,sizeof(ara));
        memset(parent,0,sizeof(parent));
        int a = 0;

        cin >> edge;
        for(int k=0;k<edge;k++)
        {
            cin >> f >> s;

            if(mp.find(f) == mp.end())
            {

                ara[a] = 1;
                parent[a] = a;
                mp[f] = a++;
            }
            if(mp.find(s) == mp.end())
            {

                ara[a] = 1;
                parent[a] = a;
                mp[s] = a++;
            }

            int x = mp[f];
            int y = mp[s];

            int ans = Union(x, y);
            cout << ans << endl;
        }
    }
    return 0;
}
