#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,y=0,i;string s;
    cin>>n>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='L')x=x-1;
        else if(s[i]=='R')x+=1;
        else if(s[i]=='U')y+=1;
        else if(s[i]=='D')y-=1;
    }
    cout<<n-abs(x)-abs(y);;
}
