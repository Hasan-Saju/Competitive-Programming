#include<bits/stdc++.h>
using namespace std;

int main()
{
    int zero=0,one=0,i,n;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='0')zero++;
        else one++;
    }
    cout<<n-min(zero,one)*2;
}
