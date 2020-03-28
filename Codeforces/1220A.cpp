#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,one=0,zero=0,i;
    string s;
    cin>>n>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='z')zero++;
        else if(s[i]=='n')one++;
    }
    for(i=0;i<one;i++)
        cout<<"1"<<" ";
    for(i=0;i<zero;i++)
        cout<<"0"<<" ";
}
