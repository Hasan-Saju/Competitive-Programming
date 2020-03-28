#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,d,n,sx,sy,sr,kount=0,i;
    float firstMatha,lastMatha,centerSausage,sagefMatha,sagelMatha;
    cin>>r>>d>>n;
    for(i=0;i<n;i++)
    {
        cin>>sx>>sy>>sr;
        firstMatha=(float)r-d;
    lastMatha=(float)r;
    centerSausage=(float)sqrt((sx*sx)+(sy*sy));
    sagefMatha=(float)centerSausage-sr;
    sagelMatha=(float)centerSausage+sr;
    if(sagefMatha>=firstMatha&&sagelMatha<=lastMatha)kount++;
    }
    cout<<kount;
    //cout<<endl<<firstMatha<<lastMatha<<centerSausage<<sagefMatha<<sagelMatha;
}
