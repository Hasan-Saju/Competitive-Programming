#include<bits/stdc++.h>
using namespace std;
int ara[26];
int main()
{
    int n,kount=0,i;
    string s;
    cin>>n>>s;
    if(n>26)
        cout<<"-1";


    else
    {
        for(i=0; i<s.size(); i++)
        {
            ara[s[i]-'a']+=1;
        }

        for(i=0; i<26; i++)
        {
            if(ara[i]!=0)
                kount++;
        }
        cout<<n-kount;
    }
}
