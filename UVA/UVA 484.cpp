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
#define N 100000
int main()
{
    ll x,i=0,topp;
    ll l;
    queue<ll>q;
    map<ll,ll>m;

    while(scanf("%lld", &l)==1 )
    {
        //x=line[0]-'0';
        x=l;
        m[x]+=1;
        if(m[x]==1)
            q.push(x);
           // line.clear();
        //cout<<x;
    }
   while(!q.empty())
   {
       topp=q.front();
       cout<<topp<<" "<<m[topp]<<endl;
       q.pop();
   }


    //cout<<v[x].size();

}

