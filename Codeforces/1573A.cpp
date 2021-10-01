#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;
        int ans=0;

        for(int j=n-1; j>=0; j--)
        {
            if(s[j]-'0'>0 and j!=n-1)
                ans++;

            ans+= s[j]-'0';
        }

        cout<<ans<<"\n";

    }
}
