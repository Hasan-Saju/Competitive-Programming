#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;
        int zero=0;
        int one=0;

        for(int j=0;j<n;j++)
        {
            if(s[j]=='1')
                one++;
            else zero++;
        }

        if(n==1 and s[0]=='0')
            cout<<"BOB\n";
        else if(n%2==1 and one==n-1 and s[n/2]=='0')
            cout<<"BOB\n";
        else if(n%2==1 and s[n/2]=='0')
            cout<<"ALICE\n";
        else
            cout<<"BOB\n";

    }
}
