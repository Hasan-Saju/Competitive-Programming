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


int main()
{
    fast
    //freopen("out.txt", "w", stdout);    //to write the output in a txt file
    //freopen("in.txt", "r", stdin);
    int t;
    cin>>t;
    while(t--)
    {
         string f,s,curr;
         f="a";
         s="b";

    int n,k,i;
    cin>>n>>k;
    for(i=2;i<=n;i++)
    {
        curr=f+s;
        //cout<<curr<<" ";
        f=s;
        s=curr;
    }
   // s=v[n];
   if(n==0)
   {
       curr=f;
   }
   else if(n==1)
   {
       curr=s;
   }
   cout<<curr<<endl;
    cout<<curr[k-1]<<endl;
    }

}
