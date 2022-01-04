#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b;
    cout<<min(a,b)<<" ";

    c=a-min(a,b);
    d=b-min(a,b);

    cout<<max(c,d)/2;
}
