#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,total=0,z,i;
    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cin>>z;
        total+=z;
    }
    total=total+n-1;
    if(total==x)cout<<"YES";
    else cout<<"NO";
}
