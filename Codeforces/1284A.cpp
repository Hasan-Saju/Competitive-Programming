#include<bits/stdc++.h>
using namespace std;
int main()
{
    int fn,sn,i,q,ans,x;
    string st;
    cin>>fn>>sn;
    vector<string>f ;
    vector<string>s;
    for(i=0;i<fn;i++)
    {
        cin>>st;
        f.push_back(st);
    }
      for(i=0;i<sn;i++)
    {
        cin>>st;
        s.push_back(st);
    }
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>q;
        ans=q%fn;
        if(ans==0)ans=fn;
        cout<<f[ans-1];
        ans=q%sn;
        if(ans==0)ans=sn;
        cout<<s[ans-1]<<endl;
    }


}
