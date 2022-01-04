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
    vector<int>v;
    ll n,x,y,i,j,sum=0,flag=0,kount=0,ans=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x>>y;
        v.pb(x-y);
    }
    for(i=0;i<n; i++)
    {
        flag=0;
        sum=0;
        kount=0;
        for(j=i;; j++)
        {
            sum+=v[j];
        //    cout<<sum<<" ";
            kount++;
            if(sum<0)
            {
                flag=1;
                break;
            }
            if(j==n-1)
                j=-1;
            if(kount==n+1)
                break;
        }
      //  cout<<endl;
       // cout<<"sum"<<sum<<" "<<endl;
    //   cout<<flag;
        if(!flag)
        {
            ans=i;
            cout<<i<<endl;
            break;
        }
    }


}



