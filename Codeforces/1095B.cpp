#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ans1,ans2;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)cin>>ara[i];
    sort(ara,ara+n);

    ans1=ara[n-1]-ara[1];
    ans2=ara[n-2]-ara[0];
    cout<<min(ans1,ans2);
}
