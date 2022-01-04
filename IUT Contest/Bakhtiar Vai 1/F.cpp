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
vector<int>v[1000000];
int main()
{
   int n,q,last=0,a,b,k,pos,spos,x,y,i;

   cin>>n>>q;
   for(i=0;i<q;i++)
   {
       cin>>a>>x>>y;
       if(a==1)
       {
           pos=(x^last)%n;
           v[pos].push_back(y);
       }
       else if(a==2)
       {
           pos=(x^last)%n;
           spos=y%v[pos].size();
           last=v[pos][spos];
           cout<<last<<endl;

       }




   }
}



