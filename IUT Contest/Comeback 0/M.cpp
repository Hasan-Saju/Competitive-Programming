#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    string s;
    cin>>n>>s;
    for(i=0;i<n;i++)cin>>s;
    if(n%2==0)cout<<"home";
    else cout<<"contest";
}
