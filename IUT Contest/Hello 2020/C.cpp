#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s,x,kount=0;
    cin>>s>>x;
    for(;;)
    {
        s=s/x;
        kount++;
        if(s==0)break;
    }
    cout<<kount;
}
