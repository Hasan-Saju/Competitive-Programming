#include<bits/stdc++.h>
using namespace std;

int graph[100][100];
int nodes, edges;

void FloydWarshall()
{
    //cout<<"penetration"<<endl;

    int i, j, k;

    for(k = 1; k <= nodes; k++)
    {
        for(i = 1; i <= nodes; i++)
        {
            for(j = 1; j <= nodes; j++)
            {
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }

    }

}

int main()
{
     //freopen("out.txt", "w", stdout);
    int t=1;
    while(cin >> nodes >> edges)
    {
        if(!nodes and !edges)break;
        //map<string,int>num;
        map<int,string>name;

        for(int i=1;i<=nodes;i++)
        {
            string s;
            cin>>s;
            //num[s]=i;
            name[i]=s;
        }

        for(int i = 1; i <= nodes; i++)
        {
            for(int j = 1; j <= nodes; j++)
            {
                if(i == j)
                    graph[i][j] = 0;
                else
                    graph[i][j] = 9000099;
            }
        }

        for(int i = 1; i <= edges; i++)
        {
            int x, y, z;
            cin >> x >> y >> z;
            graph[x][y] = z;
            graph[y][x] = z;
        }
        //cout<<"ok"<<endl;

        FloydWarshall();
        //cout<<"ok"<<endl;

         int ans=0,sumMin=900000;
        for(int i = 1; i <= nodes; i++)
        {
            int sum=0;
            for(int j = 1; j <= nodes; j++)
            {
                sum+=graph[i][j];
               // cout<<graph[i][j]<<" ";
            }
            //cout<<sum<<endl;
            if(sum<sumMin)
            {
                sumMin=sum;
                ans=i;
            }
        }
        cout<<"Case #"<<t++<<" : "<<name[ans]<<endl;
    }


}
