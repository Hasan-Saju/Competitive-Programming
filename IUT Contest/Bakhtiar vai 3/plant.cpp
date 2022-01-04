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
struct test
{
    int ind;
    int becheasi;
};
int main()
{
   vi v;
   stack<test>st;
   int n,x,maxAsi,i,becheasi;
   cin>>n;
   FOR(i,n)
   {
       cin>>x;
       v.pb(x);
   }
   st.push({0,-1});
   maxAsi=-1;
   for(i=0;i<n;i++)
   {
       becheasi=1;
       while(!st.empty())
       {
           if(v[st.top().ind]>=v[i])
           {
               becheasi=max(becheasi,st.top().becheasi+1);
               st.pop();
           }
           else{
            break;
           }
       }
       if(st.empty())
       {
           becheasi=-1;
       }
       maxAsi=max(maxAsi,becheasi);
       st.push({i,becheasi});
   }
   if(maxAsi<0)cout<<"0";
   else cout<<maxAsi;

}

