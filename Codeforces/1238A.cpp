#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        long long x,y;
        cin>>x>>y;
        if(abs(x-y)==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;


}
