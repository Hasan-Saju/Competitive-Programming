#include<bits/stdc++.h>
using namespace std;

///     ax + by = gcd(a,b)

int extendedGCD(int a, int b, int &x, int &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    int x1,y1;
    int ans=extendedGCD(b, a%b, x1, y1);

    x=y1;
    y=x1-y1*(a/b);

    return ans;
}

int main()
{
    int a,b,x,y;
    cin>>a>>b;
    int ans= extendedGCD(a,b,x,y);

    cout<<"GCD: "<<ans<<"\n";
    cout<<"x: "<<x<<"\n"
        <<"y: "<<y;
}
