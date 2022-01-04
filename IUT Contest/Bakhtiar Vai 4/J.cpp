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
    int n,small,i,koybar,num,p;
    cin>>n>>small;
    int ara[small+1];
    int in[n];
    multimap<int,int,greater<int> >m;
    multimap<int,int>::iterator it;
    memset(ara,0,sizeof(ara));
    for(i=0; i<n; i++)
    {
        cin>>in[i];
    }
    for(i=0; i<n; i++)
    {
        num=count(in,in+n,in[i]);
        m.insert(make_pair(num,in[i]));
    }
    for(it=m.begin(); it!=m.end(); it++)
    {

        p=it->second;
        if(ara[p]!=-1)
        {
            koybar=it->first;
            while(koybar--)
            {
                cout<<p<<" ";
            }
            ara[p]=-1;
        }
    }



}
