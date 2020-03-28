#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,flag=0,wordLen=0;
    string s;
    cin>>n>>s;
    for(i=0;i<s.size();i++)
    {
        if((s[i]>='a'&&s[i]<='z'&&!flag)||(s[i]>='A'&&s[i]<='Z'&&!flag))
        {

            while(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
            {
                wordLen++;
                i++;
            }
        }
        if(s[i]=='(')
        {
            flag=1;
        }
                if(s[i]==')')
        {
            flag=0;
        }

    }
    cout<<wordLen;
}
