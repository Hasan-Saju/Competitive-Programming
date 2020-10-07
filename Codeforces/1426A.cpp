#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if(n==1 or n==2)
        {
            cout<<"1\n";
            continue;
        }
        n=n-2;
        int ans=(n/x)+1;
        if(n%x!=0)
        ans++;

        cout<<ans<<"\n";
    }
}
