#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ara[26],i,maxx=0,num=1;
    memset(ara,0,sizeof(ara));
    for(i=0; i<s.size(); i++)
    {
        if(ara[(s[i]-'a')]==0)
        {
            ara[s[i]-'a']=num;
            num++;
        }

        if((s[i]-'a')>maxx)
            maxx=s[i]-'a';
    }
    if(ara[0]==0)
    {
        cout<<"NO";
        return 0;
    }
    for(i=1; i<=maxx; i++)
    {
        if(ara[i]==0||(ara[i]-ara[i-1])!=1)
        {
            cout<<"NO";
            return 0;
        }

    }
    cout<<"YES";


//    for(i=0;i<26;i++)
//    cout<<ara[i];
}
