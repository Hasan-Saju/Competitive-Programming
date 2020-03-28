#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k,maxx=0,kount=0,i,total=0;
    cin>>s>>k;
    int ara[26];
    for(i=0;i<26;i++)
    cin>>ara[i];
    maxx=*max_element(ara,ara+26);
    for(i=1;i<s.size();i++)
    {
       total=total+(i*ara[s[i-1]-'a']);
        cout<<total<<" ";
    }
     for(i=i,kount=0;kount<=k;i++,kount++)
     {
         total=total+i*maxx;
          cout<<total<<" ";

     }
     cout<<endl<<total<<" "<<maxx;
}
//847 2541 3900 5552 9062 29978
