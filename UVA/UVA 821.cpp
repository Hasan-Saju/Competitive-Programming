#include<bits/stdc++.h>
using namespace std;
#define SP(x)       fixed<<setprecision(x)

int graph[105][105];
int nodes=105, edges;

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
    freopen("out.txt", "w", stdout);
    int t = 1;

    while(true)
    {
        int a, b;
        set<int>uni;

        for(int i = 1; i <= 105; i++)
        {
            for(int j = 1; j <= 105; j++)
            {
                if(i == j)
                    graph[i][j] = 0;
                else
                    graph[i][j] = 999999;
            }

        }
        cin >> a >> b;
       // cout<<"start"<<endl;
        if(!a and !b)
        {
            return 0;
        }
            //break;
        graph[a][b] = 1;
        uni.insert(a);
        uni.insert(b);


        while(cin >> a >> b)
        {
            if(!a and !b)
            {
               // cout<<"first zero"<<endl;
                //ans
                FloydWarshall();
                int sum = 0;

                for(int i = 1; i <= 105; i++)
                {
                    for(int j = 1; j <= 105; j++)
                    {
                        if(i != j and graph[i][j] != 999999)
                            sum += graph[i][j];
                    }
                }

                int sizee = uni.size();
                double ans= (double)sum /(sizee*(sizee-1));
                cout << "Case " << t++ << ": average length between pages = " << SP(3) << ans << " clicks" << endl;

                uni.clear();
                break;
            }
            graph[a][b] = 1;
            uni.insert(a);
            uni.insert(b);


        }
    }


}
