#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sum=0;
    cin>>n;
    int ara[26];
    char s[n];
    scanf("%s",s);
    strlwr(s);
    //cout<<s;
    memset(ara,0,sizeof(ara));
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            ara[s[i]-'a']=1;

    }
    for(i=0;i<26;i++)
    {
        sum+=ara[i];
    }
    if(sum==26)cout<<"YES";
    else cout<<"NO";


}
