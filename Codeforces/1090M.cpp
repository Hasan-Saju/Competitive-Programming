#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,kount=0,ans=0,x,i;
    cin>>n>>k;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(i=0;i<n-1;i++)
    {
        if(v[i]!=v[i+1])
        {
            kount++;
            //cout<<"bare";
        }
        if(v[i]==v[i+1])
        {
            if(kount>=ans)ans=kount;
           // cout<<"shoman";
            kount=0;
        }
    }
    if(kount>=ans)ans=kount;
    cout<<ans+1;
}
