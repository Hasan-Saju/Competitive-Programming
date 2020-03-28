#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;

    if(x%4==1)cout<<"0 A";
    else if(x%4==3)cout<<"2 A";
    else if(x%4==2)cout<<"1 B";
    else if(x%4==0)cout<<"1 A";
    return 0;
}
