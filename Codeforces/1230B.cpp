#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k==0)
    {
        cout<<s;
        return 0;
    }
    else if(s.size()==1)
    {
        cout<<"0";
        return 0;
    }
    else if(s[0]!='1')
        {
            s[0]='1';
            k--;
            if(k==0)
            {
                cout<<s;
                return 0;
            }
        }
    for(i=1;i<s.size();i++)
    {
        if(s[i]!='0')
        {
            s[i]='0';
            k--;
        }
        if(k==0)break;

    }
    cout<<s;
}
