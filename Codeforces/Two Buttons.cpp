#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,x,kount=0;
    cin>>n>>m;

    x=m;

    if(n>m)
    {
        while(n!=m)
        {
            label:
        m++;
        kount++;
        }
    }
    else
    {
        while(n!=m)
        {
            if(m%2==0)
            {
                m/=2;
                kount++;

                if(n>m)goto label;
            }
            else
            {
                m++;
                kount++;
            }
        }
    }
    cout<<kount;

}
