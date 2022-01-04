#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        long long c,b,ek,dui;
        cin>>c>>ek>>dui;
        if(ek*2==dui||ek*2<dui)
        {
            cout<<c*ek;
        }
        else
        {
            b=(c/2)*dui+(c%2)*ek;
            cout<<b;
        }
        cout<<endl;
    }

}
