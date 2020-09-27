#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        long long a,b,ans=0;
        cin>>a>>b;
        long long diff=abs(a-b);
        ans=(diff/10);
        if(diff%10!=0)
        ans++;
        cout<<ans<<"\n";
    }


}
