#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll Digits(ll a)
{
    return(floor(log10(a))+1);
}

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        long long l,r;
        cin>>l>>r;

        ll iter=Digits(r);
        ll ans=0;
        ll hor = 1;

        for(int i=0;i<iter;i++)
        {
            ans += (r/hor) - (l/hor);
            hor*=10;
        }

        cout<<ans<<"\n";

    }
}
