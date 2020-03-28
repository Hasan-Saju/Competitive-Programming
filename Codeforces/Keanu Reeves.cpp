#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
#include<stdio.h>
#include<sstream>
using namespace std;

int main()
{
    int n,yes=0,i,one=0,zero=0,shunno=0,ek=0;
    cin>>n;

  char s[n];
  scanf("%s",&s);
//   getline(cin,s);


    for(i=0; i<n; i++)
    {
        if(s[i]=='0')
            zero++;
        else
            one++;

    }
    if(zero!=one)
    {
        cout<<"1\n"<<s;
    }
    else
    {
        cout<<"2\n"<<s[0]<<" ";
        for(i=1;i<strlen(s);i++)
        {
         cout<<s[i];
        }

    }
    return 0;

}
