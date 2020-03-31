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
#define asi         cout<<"Check"<<endl;
#define bye         return 0
#define ok          cout<<"OK"<<endl;
//lower_bound == Shoman othoba prothom boro element ta return korbe//iterator return kore
//upper bound mane first boro element return korbe
//string s(n,'a');

ll Digits(ll a)
{
    return(floor(log10(a)) + 1);
}
ll BMod(ll B, ll P, ll M)
{
    ll R = 1;
    B = B % M;
    while(P)
    {
        if(P & 1)
            R = (R * B) % M;
        P >>= 1;
        B = (B * B) % M;
    }
    return R;
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b);

}

const int N = 100005;
vector<int>V[N];
bool vis[N] = {false};

void bfs(int src)
{
    vis[N]={false};
    queue<int>Q;
    Q.push(src);
    while(!Q.empty())
    {
        int x=Q.front();
        Q.pop();
        for(int i=0;i<V[x].size();i++)
        {
            int u=V[x][i];
            if(vis[u]==false)
            {
                vis[u]=true;
                Q.push(u);
            }
        }
    }



}


int main()
{
    // fWrite;
    fast
    int nodes;
    while(cin >> nodes and nodes != 0)
    {

        int n, x, y;
        // cin>>n;
        while(cin >> x)
        {
            if(x == 0)
                break;

            while(cin >> y)
            {
                if(y == 0)
                    break;
                V[x].pb(y);
            }

        }
        int t;
        cin >> t;
        // cout<<t<<endl;
        for(int q = 1; q <= t; q++)
        {
            cin >> y;
            vis[N] = {false};
            bfs(y);
            int kount = 0;
            vi v;
            v.clear();
            for(int j = 1; j <= nodes; j++)
            {
                // cout<<vis[j]<<" ";
                if(vis[j] == false)
                {
                    kount++;
                    v.pb(j);
                }
            }
            if(kount==0)cout<<kount;
            else
            cout << kount << " ";
            int j=0;
            for( j = 0; j < v.size(); j++)
                {
                     cout << v[j];
                     if(j!=v.size()-1) cout<< " ";
                }

            cout << endl;

            vis[N] = {false};
            fill(vis,vis+N,false);//
            v.clear();
        }

        for(int y = 0; y <= nodes; y++)
            V[y].clear();
        vis[N] = {false};
    }

}
