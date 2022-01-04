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
int ara[1000000];
int main()
{
    int n,i,j,save=0,sum=0,x,y;
    cin>>n;
    vector<pair<int,int> >v;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back(x,y);
    }
   for(j=0;j<n;j++)
   {
       sum=0;

    for(i=j;i<n;i++)
    {
        sum+=(x-y);
        if(sum<0)
        {
            break;
        }
        if(i==n-1)i=0;
        if(i==j-1&&sum>0)
        {
            save=j;
        }
        if(i==j-1)break;
    }

   }
   cout<<save;

}



