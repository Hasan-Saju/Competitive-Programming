#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;

    string s;
    cin>>s;
    int pref[100000];
    memset(pref,0,sizeof(pref));

    for(int i=0;i<s.size();i++)
    {
        pref[i]=s[i]-'a'+1;
        if(i>0)
            pref[i]+=pref[i-1];
    }

    for(int j=0;j<q;j++)
    {
        int l,r;
        cin>>l>>r;

        int ans=0;
        if(l-2<0)
            ans = pref[r-1];
        else
            ans= pref[r-1]-pref[l-2];

        cout<<ans<<"\n";
    }
}
