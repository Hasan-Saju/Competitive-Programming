#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;

        int one=0, zero=s.size()-1;
        int flag=0;

        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='1')
                one=j;
            if(flag==0 and s[j]=='0')
            {
                zero=j;
                flag=1;
            }
        }
        //cout<<"\n"<<zero<<" "<<one<<"\n";
        cout<<zero-one+1<<"\n";
    }
}
