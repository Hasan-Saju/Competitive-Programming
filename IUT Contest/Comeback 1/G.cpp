#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,mid,sum;
    cin>>c>>d;
    if(abs(c-d)==1)cout<<"1";
    else {
    mid=(c+d)/2;
    a=mid-min(c,d);
    b=max(c,d)-mid;
    sum=((a*(a+1))/2)+((b*(b+1))/2);
    cout<<sum;
    }
}
