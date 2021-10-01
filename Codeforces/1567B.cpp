#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    vector<int>mx(500000);
    mx[0]=0;
    for(int i=1;i<500000;i++)
        mx[i]=mx[i-1]^i;

    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;

        int xxor=0;

        xxor=mx[a-1];

        if(xxor==b)
            cout<<a<<"\n";
        else if((xxor^b)!=a)
            cout<<a+1<<"\n";
        else
            cout<<a+2<<"\n";
    }
}
