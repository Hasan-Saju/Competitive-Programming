#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define si set<int>
#define FOR(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int trie[1000005][5];
int endd[1000005];
int visited[1000005];
int id=1;
int maxx=-9999999;


void build_trie(string s)
{
    int root=1,i;
    for(i=0;i<s.size();i++)
    {
        int ch=s[i]-'0';
        if(!trie[root][ch])
            trie[root][ch]=++id;
        root=trie[root][ch];
        visited[root]++;
      // cout<<visited[root]<<"|"<<root<<" ";
      //cout<<root<<" ";
    }
    endd[root]++;
}

void check(string s)
{
    int root=1,i,num;
    for(i=0;i<=s.size();i++)
    {
        num=(i)*visited[root];
      //  cout<<(i+1)<<"|"<<visited[root]<<" ";
        maxx=max(num,maxx);
      //  cout<<maxx<<" ";
        int ch=s[i]-'0';
        root=trie[root][ch];
    }


}





int main()
{
    fast
  //  freopen("out.txt", "w", stdout);  //to write the output in a txt file
    int t;
    vector<string>v;
    cin>>t;
    for(int p=1;p<=t;p++)
    {
        int n;
        cin>>n;
        for(int q=0;q<n;q++)
        {
            string st,x;
            cin>>st;
           // st=conv(x);
            build_trie(st);
            v.pb(st);
        }

         for(int q=0;q<n;q++)
         {
             check(v[q]);
         }

       // cout<<"Case "<<p<<": "<<maxx<<endl;
       cout<<maxx<<endl;
        v.clear();
        memset(trie,0,sizeof(trie));
        memset(endd,0,sizeof(endd));
        memset(visited,0,sizeof(visited));
        id=1;
        maxx=-999999;



    }


}

