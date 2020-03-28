#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,n,loss=0,x,y,i;
    cin>>s>>n;

    multimap<int,int>m;
    multimap<int,int>::iterator it;

    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        m.insert(make_pair(x,y));
    }
    for(it=m.begin();it!=m.end();it++)
    {
        if(s>it->first)s=s+it->second;
        else
        {
            loss=1;
            break;
        }
    }

    if(!loss)cout<<"YES";
    else cout<<"NO";



}
