#include<bits/stdc++.h>
using namespace std;
int main()
{
//   vector<pair<int,int> >vp;
    map<int,int>m;
    map<int,int>::iterator it;
    int n,i,x;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        m.insert(make_pair(x,i));
    }
    for(it=m.begin();it!=m.end(); it++)
    {
        printf("%d ",it->second);
    }
}
