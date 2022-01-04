#include<bits/stdc++.h>
#define pii 3.141592654
using namespace std;
int main()
{
    int v,s;
    double r,angle,area,result;
    cin>>v>>s;
    angle=180/(double)v;
    angle=(angle*pii)/180;
    angle=sin(angle);
    r=1.0/(2.0*(angle));
    r=(double)s*r;
    area=pii*r*r;
    cout<<setprecision(11)<<area;

  //  result=sin(angle);
    //cout<<setprecision(7)<<result<<" "<<angle<<endl;
    }
