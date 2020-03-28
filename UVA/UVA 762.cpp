#include<bits/stdc++.h>

using namespace std;
map<string,string> previous;
map<string,bool> visited;
map<string,vector<string> > adj;

bool bfs(string s1,string s2)
{
    queue<string> q;
    while(!q.empty())
        q.pop();
    q.push(s1);
    while(!q.empty())
    {
        string str=q.front();
        q.pop();
        visited[str]=true;
        if(str==s2)
            return true;
        for(int i=0; i<adj[str].size(); i++)
        {
            string str2=adj[str][i];
            if(!visited[str2])
            {
                visited[str2]=true;
                previous[str2]=str;// because there is only one path between two nodes
                if(str2==s2)
                    return true;
                q.push(str2);
            }

        }
    }
    return false;
}
void print_path(string s1,string s2)
{
    if(s1==s2)
        return;
    print_path(previous[s1],s2);//age ekdom matha porjonto jabe then print korte thakbe
    cout<<previous[s1]<<" "<<s1<<endl;
}
int main()
{
    int n,i;
    string s1,s2;
    bool p=false;
    while(scanf("%d",&n)!=EOF)
    {

        for(i=0; i<n; i++)
        {
            cin>>s1>>s2;
            adj[s1].push_back(s2);
            adj[s2].push_back(s1);
        }
        cin>>s1>>s2;
        if(p)
            printf ("\n");
        p = true;
        if(bfs(s1,s2))
        {
            print_path(s2,s1);
        }
        else
            cout<<"No route"<<endl;
        visited.clear();
        adj.clear();
        previous.clear();

    }
    return 0;
}
