#include<bits/stdc++.h>
using namespace std;



#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);

#define NL          "\n"


int main()
{
    fast
    int test;
    cin>>test;
    while(test--)
    {
        string s;
        int n;
        cin>>n;
        cin>>s;
        int ans=0,temp=0;


        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                temp+= 1;
            }
            else temp-=1;
            if(temp<0)
            {
                ans++;
                temp=0;
            }
        }
        cout<<ans<<NL;
    }
}

