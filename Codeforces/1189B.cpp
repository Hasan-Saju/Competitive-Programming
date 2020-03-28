#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,flag=0,i;
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

        if(v[n-3]+v[n-2]<=v[n-1])flag=1;

    if(flag)cout<<"NO";
    else
    {
        cout<<"YES"<<endl;
    for(i=n-1;i>=0;i-=2)cout<<v[i]<<" ";
    for(i=n%2;i<n;i+=2)cout<<v[i]<<" ";
    }
}
