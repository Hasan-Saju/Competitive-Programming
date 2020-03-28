#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[4],i,sum=0;
    for(i=0;i<4;i++)cin>>ara[i];
    string s;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        s[i]=s[i]-'0';
        sum+=ara[s[i]-1];
    }
    cout<<sum;
    return 0;
}
