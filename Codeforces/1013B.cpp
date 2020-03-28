#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s1,s2;
    int n,x,i,ans=INT_MAX,a;
    cin>>n>>x;
    for(i=0; i<n; i++)
    {
        cin>>a;
        if(s1.count(a)) ans=min(ans,0);
        if(s1.count(a&x)||s2.count(a))  ans=min(ans,1);
        if(s2.count(a&x))  ans=min(ans,2);

        s1.insert(a);
        s2.insert(a&x);
    }
    if(ans>2)cout<<"-1";
    else
    cout<<ans;
}
