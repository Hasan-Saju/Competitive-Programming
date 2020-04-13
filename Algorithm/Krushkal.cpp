#include<bits/stdc++.h>
#define MAXN 100005;

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
        if (u != v) {
            pr[u] = v;
            kount++;
            s += e[i].w;
            if (kount == n - 1)
                break;
        }
    }
    return s;
}


int main()
{
    // READ("in");
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edge get;
        get.u = u;
        get.v = v;
        get.w = w;
        e.push_back(get);
    }
    cout << mst(n) << endl;
    return 0;
}

//loj 1029
