#include<bits/stdc++.h>
using namespace std;


int main()
{
    int node;
    cin >> node;
    vector<int>parent(node+1);
    vector<bool>notLeaf(node+1,false);
    for(int i=1; i<=node; i++)
    {
        int u;
        cin >> u;
        notLeaf[u]=true;
        parent[i]=u;
    }

    for(int i=1; i<=node; i++)
    {
        if(notLeaf[i])
            continue;

    }

}
