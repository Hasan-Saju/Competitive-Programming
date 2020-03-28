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
    int t,i,j,kount=0;
    ll a,b,x,y;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        x=min(a,b);
        y=max(a,b);
        kount=0;
        for(j=1;;j++)
        {
            kount++;
            if(x<y)
            x=x+j;
            else if(y<x)
                y=y+j;
                else if(x==y)break;
        }
        cout<<kount<<endl;
    }





}



