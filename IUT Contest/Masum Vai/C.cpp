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
    int n,a,b,c,d,i,j;
    vector<int>v;
    vector<int>temp;
    cin>>n>>a>>b>>c>>d;
    v.pb(0);
    for(i=1;i<=n;i++)
    {
        v.push_back(i);
    }

    for(i=a;i<=b;i++)
    {
        temp.pb(i);
    }

    for(i=a,j=temp.size()-1;i<=b,j>=0;i++,j--)
    {
        v[i]=temp[j];
    }

    temp.clear();
     for(i=c;i<=d;i++)
    {
        temp.pb(v[i]);
        //cout<<i<<" ";
    }

    for(i=c,j=temp.size()-1;i<=d,j>=0;i++,j--)
    {
        v[i]=temp[j];
    }
     for(i=1;i<=n;i++)
    {
        cout<<v[i]<<" ";
    }
}
