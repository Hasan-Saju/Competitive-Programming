#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x,i,j;

    cin>>n>>m;
    set<int>ss;
  //  set<int>::iterator it;
    int vec[n+1];
    int f[n+1],s[m+1];
    ss.clear();
    for(i=1;i<n+1;i++)cin>>f[i];
    for(j=n;j>=0;j--)
    {
            ss.insert(f[j]);
            vec[j]=ss.size();
    }
    for(i=1;i<m+1;i++)
    {
        cin>>x;
        cout<<vec[x]<<endl;
    }

//for(i=1;i<n+1;i++)cout<<vec[i];
}
