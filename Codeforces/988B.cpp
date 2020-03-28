#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,no=0;
    string s;
    cin>>n;
    vector<pair<int,string> >v;
    for(i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(make_pair(s.size(),s));
    }
    sort(v.begin(),v.end());
    for(i=1;i<n;i++)
    {
        s=v[i].second;
        if(s.find(v[i-1].second)==string::npos)
        {
            no=1;
          //  cout<<i;
            break;
        }
    }
    if(no)cout<<"NO";
    else
        {
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)
            cout<<v[i].second<<endl;
        }
}
