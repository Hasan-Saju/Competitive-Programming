#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define si set<int>
#define FOR(i,n) for(int i=0;i<n;i++)
int main()
{

    char s[100000];
    set<string>sett;
     set<string>::iterator it;
    char words[999999];
    int len=0,i,k=0;
    while(gets(s))
    {
        len=strlen(s);
        for(i=0;i<len;i++)
        {
            if(isalpha(s[i]))
            {
                words[k++]=tolower(s[i]);
            }
            else if(s[i]=='-'&&(i+1)!=len)
            {
                words[k++]=s[i];
            }
             if(((i+1)==len&&s[i]!='-')||(!isalpha(s[i])&&s[i]!='-'))
             {
                 words[k]='\0';

             if(k!=0)
             {
                 sett.insert(words);
             }
             k=0;
             }
        }
    }
    for(it=sett.begin();it!=sett.end();it++)
    {
        cout<<*it<<endl;
    }
}

