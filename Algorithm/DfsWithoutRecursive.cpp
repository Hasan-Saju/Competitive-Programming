#include<bits/stdc++.h>
using namespace std;

const int N=100005;
vector<int>V[N];
bool vis[N];
vector<int> ans;

void dfs(int s)
{
   // int i,j;
    stack<int> st;
    st.push(s);
    vis[s]=true;
    while(!st.empty())
    {
        int u=st.top();
        st.pop();
        ans.push_back(u);
        for(auto x:V[u])
        {
            if(!vis[x])
            {
                vis[x]=true;
                st.push(x);
            }
        }

    }
    //return c;
}

int main()
{
    int node,edge;
    cin >> node >> edge;
    for(int i=1;i<=edge;i++)
    {
        int u,v;
        cin >> u >> v;
        V[u].push_back(v);
        V[v].push_back(u); //Bi-directional
    }
    dfs(1);
}


