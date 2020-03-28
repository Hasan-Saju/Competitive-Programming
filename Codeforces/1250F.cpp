#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,opor,ans=INT_MAX,per;
    cin>>n;
    for(i=1;i<=sqrt(n)+2;i++)
    {
        if(n%i==0)
        {
            opor=n/i;
            per=2*(opor+i);
            ans=min(ans,per);
        }
    }
    cout<<ans;
}
