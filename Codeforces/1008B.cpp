#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,w,h,t,i;
    cin>>n;
    cin>>w>>h;
    t=max(w,h);
    for(i=1;i<n;i++)
    {
        cin>>w>>h;
        if(t<w&&t<h)
        {
            cout<<"No";
            return 0;
        }
        if(max(w,h)>t)t=min(w,h);
        else t=max(w,h);


    }
    cout<<"Yes";
}
