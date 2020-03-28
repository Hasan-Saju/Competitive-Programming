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
    int t,i,n,p,k,x;
    cin>>t;
    vi v;

    for(i=0;i<t;i++)
    {
        v.clear();
        cin>>n>>p>>k;
        for(j=0;j<n;j++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(j=1;j<n;j+=2)
        {
            cost+=v[j];
            if(cost>p)
            {
                cost-=v[j];
                break;
            }
        }
    }





}



