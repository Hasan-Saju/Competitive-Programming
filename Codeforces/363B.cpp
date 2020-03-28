#include<bits/stdc++.h>
using namespace std;
vector<int>vec;
int main()
{
    int n,k,x,ind,i,sum=0;
    long long ans=99999999999999;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
    }
    for(i=0;i<k;i++)
    {
        sum+=vec[i];
    }
    //cout<<"*"<<sum<<"*";
    if(sum<ans)
    {
        ans=sum;
        ind=i-k+1;
    }
    for(;i<n;i++)
    {
        sum=sum+vec[i]-vec[i-k];
      //  cout<<"*"<<sum<<"*";
    if(sum<ans)
    {
        ans=sum;
        ind=i-k+2;
    }
    }
    cout<<ind;
}
