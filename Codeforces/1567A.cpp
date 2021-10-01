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

        string s,ans;
        cin>>s;

        ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='U')
                ans+="D";
            else if(s[i]=='D')
                ans+="U";
            else
                ans+=s[i];
        }
        cout<<ans<<"\n";
    }
}
