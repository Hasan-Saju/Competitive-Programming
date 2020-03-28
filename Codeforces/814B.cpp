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
int main()
{
    int n,kount=0,i,x;

    cin>>n;
    vi ara(n+1,1);
   // memset(ara,1,sizeof(ara));
    set<int>ans1,ans2;
    vector<int>::iterator it;
    vi first,last,a1,a2;
    ara[0]=0;
    for(i=0;i<n;i++)
    {
        cin>>x;
        first.pb(x);
        ara[x]=0;
    }
     for(i=0;i<n;i++)
    {
        cin>>x;
        last.pb(x);
        ara[x]=0;
    }
    for(i=0;i<n;i++)
    {
        if(first[i]!=last[i])kount++;
    }
    if(kount==2)
    {
         for(i=0;i<n;i++)
         {
             if(first[i]==last[i])
             {
                 ans1.insert(first[i]);
                 ans2.insert(first[i]);
                 a1.pb(first[i]);
                 a2.pb(first[i]);
                // ans1[i]=first[i];
             }
             else if(first[i]!=last[i]&&kount==2)
             {
                 kount--;
                 ans1.insert(first[i]);
                 ans2.insert(last[i]);
                 a1.pb(first[i]);
                 a2.pb(last[i]);
                // ans1[i]=first[i];
             }
              else if(first[i]!=last[i]&&kount==1)
             {
                 kount--;
                 ans1.insert(last[i]);
                 ans2.insert(first[i]);
                 a1.pb(last[i]);
                 a2.pb(first[i]);
              //   ans1[i]=last[i];
                 //cout<<last[i]<<" ";
             }
         }
         if(ans1.size()==n)
         {
             for(it=a1.begin();it!=a1.end();it++)cout<<*it<<" ";
         }
         else if(ans2.size()==n)
         {
             for(it=a2.begin();it!=a2.end();it++)cout<<*it<<" ";
         }

    }


   else if(kount==1)
    {
         for(i=0;i<n;i++)
         {
             if(first[i]==last[i])cout<<first[i]<<" ";
             else if(first[i]!=last[i])
             {
                 it=find(ara.begin(),ara.end(),1);
                 cout<<distance(ara.begin(),it)<<" ";
             }
         }

    }
}
