#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,aSq;
    long double r,area,peri;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>aSq;
        r=sqrt(aSq)/2;
        peri=2*M_PI*r;
        area=(float)aSq-(M_PI*r*r);
        cout<<fixed<<setprecision(16)<<area<<" ";
        cout<<fixed<<setprecision(16)<<peri<<endl;
        //cout<<endl<<(float)aSq;
    }

}
