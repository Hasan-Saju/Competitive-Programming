#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,xP=0,yP=0,ansx=0,ansy=0,i;
    cin>>x>>y;

    for(i=1;;i++)
    {
        xP=5*i;
        yP=3*i;
        if(x-xP==y-yP)
        {
            ansx=xP;
            ansy=yP;
        }
        if(xP>x or yP>y)break;

    }
    if(ansx==0 or ansy==0)cout<<"Not possible";
    else    cout<<ansx<<" "<<ansy;


}
