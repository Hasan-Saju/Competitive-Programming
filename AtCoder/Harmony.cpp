#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,sum;
    cin>>a>>b;
    sum=a+b;
    if(sum%2!=0)cout<<"IMPOSSIBLE";
    else cout<<(sum/2);
}
