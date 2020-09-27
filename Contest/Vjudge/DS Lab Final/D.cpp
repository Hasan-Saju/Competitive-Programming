#include<bits/stdc++.h>
using namespace std;

int graph[105][105];
int next[105][105];
int nodes,edges;

void FloydWarshall()
{
    int i,j,k;
    for(k=1; k<=nodes; k++)
    {
        for(i=1; i<=nodes; i++)
        {
            for(j=1; j<=nodes; j++)
            {
                if(graph[i][j]>graph[i][k]+graph[k][j])
                {
                    graph[i][j]=graph[i][k]+graph[k][j];
                    //next[i][j]=next[i][k];//for path
                }

                //graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j])
                //graph[i][j]=graph[i][j] || (graph[i][k] && graph[k][j]); //kon kon node theke kon kon node a jawa jay,  1 thakle jawa jay
            }
        }
    }
}


int main()
{
    int t;
    cin>>t;

    for(int g=1;g<=t;g++)
    {
        cin>> nodes;
        for(int i=1; i<=nodes; i++)
        {
            for(int j=1; j<=nodes; j++)
            {
                int x;
                cin>>x;
                if(i==j)
                    graph[i][j]=0;
                else if(x==0)
                    graph[i][j]=0;
                else
                    graph[i][j]=x;
            }
        }
        //input for every next[i][j]=j;

        FloydWarshall();
        int q,s,d;
        cin>>q;
        int sum=0;
        while(q--)
        {
            cin>>s>>d;
            sum+=graph[s][d];
        }
        cout<<"Case #"<<g<<": "<<sum<<"\n";
        memset(graph,0,sizeof(graph));

    }


}
/*
vector<int>path;
findPath(int start,int finish)
{
    path.push_back(start);
    while(start!=finish)
    {
        start=next[start][finish];
        path.push_back(start);
    }
}*/
