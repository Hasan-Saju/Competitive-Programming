#include<bits/stdc++.h>
#define MAXN 100005

using namespace std;

struct edge {           //node er shob tulona w er sapekkhe hobe
    int u, v, w;
    bool operator<(const edge& p) const
    {
        return w < p.w;
    }
};

int pr[MAXN];
vector<edge> e;

int employed[MAXN];
int boss[MAXN];
int staff[MAXN];


int Find(int r)
{
    return pr[r]= (pr[r]==r) ? r:Find(pr[r]);
}

int mst(int n)//n is for number of node
{
    sort(e.begin(), e.end());
    for (int i = 1; i <= n; i++)
        pr[i] = i;

    int kount = 0, s = 0;
    for (int i = 0; i < e.size(); i++) {
        int u = Find(e[i].u);
        int v = Find(e[i].v);
        if (u != v and  employed[e[i].v]==0) {
                //cout<<"staffs "<<e[i].v<<"\n";
            employed[e[i].v]=1;
            pr[u] = v;
            kount++;
            s += e[i].w;

            if (kount == n - 1) //tree te n node and n-1 edge thake
                break;
        }
    }
    return s;
}


int main()
{
    // READ("in");
    int n, m;
    cin >> n;
    vector<int>skill(n+1);
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        skill[i]=x;
    }

     cin>> m;
    for (int i = 1; i <= m; i++) {
        int u, v, w;
        cin >> u >> v >> w;

        boss[u]++;
        staff[v]++;

        edge get;
        get.u = u;
        get.v = v;
        get.w = w;
        e.push_back(get);
    }

    bool ans=false;

    for(int i=1;i<=n;i++)
    {
        if(staff[i]==0)
            ans=true;
    }

    int mstVal = mst(n);
    int emp=0;
    for(int i=1;i<=n;i++)
    {
        //cout<<employed[i]<<" ";
        if(employed[i])
            emp++;
    }

    //cout<<"emp: "<<emp<<"\n"<<"ans var:  "<<ans<<"\n";

    if(ans==true and emp==n-1)
        cout<<mstVal;
    else
    cout << "-1" << endl;
    return 0;
}

//loj 1029

