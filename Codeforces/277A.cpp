#include<bits/stdc++.h>
using namespace std;

#define Max 100

int parent[Max];
int size;
void makeSet(int n)
{
    for(int x = 0; x <= n; x++)
        parent[x] = x;

}

int Find(int reprasentative)
{
    if (parent[reprasentative] == reprasentative)
    {
        return reprasentative;
    }
    return parent[reprasentative] = Find(parent[reprasentative]);
}
void Union(int a, int b)
{
    int u = Find(a);
    int v = Find(b);
    if(u == v)
    {
        // printf("Frnds");
    }
    else
        parent[u] = v;
}
int main()
{



    int emp, lan, zero = 0;
    cin >> emp >> lan;
    bool exist = false;
    set<int > cluster, uniq;

    makeSet(lan);

    for(int i = 1; i <= emp; i++)
    {

        int num;
        cin >> num;
        int temp, prev;

        if(num == 0)
        {
            zero++;
            continue;
        }
        for(int j = 1; j <= num; j++)
        {
            exist = true;
            cin >> temp;

            if(j != 1)
            {
                Union(temp, prev);
            }
            uniq.insert(temp);
            prev = temp;
        }
    }

        for(auto it : uniq)
        {
            int ma = Find(it);
            cluster.insert(ma);
           // cout<<it<<" "<<ma<<"/"<<endl;
        }



    if(exist == false)
    {
        cout << emp;
    }
    else
        cout << (zero + cluster.size() - 1);


    return 0;
}

