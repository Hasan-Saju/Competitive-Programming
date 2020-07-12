#include<bits/stdc++.h>
using namespace std;
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define emb         emplace_back
int main()
{
    fast
    int n;
    cin>>n;

    vector<int>f,s,ans;
    set<int>st;

    for(int i=0;i<n; i++)
        f.emb(i);
    for(int i=1;i<n; i++)
        s.emb(i);
    s.emb(0);

    for(int i=0;i<n;i++)
       {
           st.insert( (f[i]+s[i])%n ); ans.emb( (f[i]+s[i])%n );
       }

    if(st.size()!=n)
        cout<<"-1";
    else
    {
        for(auto x:f )
            cout<<x<<" ";
        cout<<"\n";

        for(auto x:s )
            cout<<x<<" ";
        cout<<"\n";

        for(auto x:ans )
            cout<<x<<" ";

    }

}

