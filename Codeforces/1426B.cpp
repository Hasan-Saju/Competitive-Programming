#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;
        bool ans=false;
        for(int i=1;i<=n;i++)
        {
            int a,b,c,d;
            cin>>a>>b>>c>>d;

            if(b==c and m%2==0)ans=true;
        }
        if(ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
