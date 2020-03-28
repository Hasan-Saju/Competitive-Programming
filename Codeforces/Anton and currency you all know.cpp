#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,len,flag=0;
    len=s.length();

  for(i=0;i<len;i++)
    {
        if(s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='0')
        {
            if(s[len-1]>s[i])
            {
            swap(s[i],s[len-1]);
            flag=1;
            break;
            }
        }
    }
    if(!flag)
    {

      for(i=len-1;i>=0;i--)
    {
        if(s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='0')
        {
            swap(s[i],s[len-1]);
            flag=1;
            break;
        }
    }
    }



    if(flag)cout<<s;
    else cout<<"-1";

}
