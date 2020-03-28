#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int n,i,x,energy=0,ans=0;
    cin>>n;
    v.push_back(0);
    for(i=1; i<=n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(i=1; i<=n; i++)
    {
        energy=energy+v[i-1]-v[i];
        if(energy<0)
        {
            ans+=abs(energy);
            energy=0;
        }
    }
    cout<<ans;

}
