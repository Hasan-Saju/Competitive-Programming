#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,kount=0,i,pos=0;
    string str;
    cin>>n>>str;
    for(i=0;i<n;i++)
    {
        if(str[i]=='(')kount++;
        else if(str[i]==')')kount--;

        if(kount<=-2)
        {
            cout<<"No";
            return 0;
        }
    }
    if(kount!=0)cout<<"No";
    else cout<<"Yes";

}
