#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long gy,gb,ry,rg,rb,yel,bl;
    cin>>gy>>gb>>ry>>rg>>rb;

    yel=ry*2+rg;
    bl=rb*3+rg;

    if(yel>gy&&bl>gb)
    {
        cout<<yel-gy+bl-gb;
    }
    else if(yel>gy)
    {
        cout<<yel-gy;
    }
    else if(bl>gb)cout<<bl-gb;
    else cout<<"0";
}
