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
        ll x;
        cin>>x;

        ll digit=Digits(x);
        int ans=(digit-1)*9;

        //cout<<"checkf";

        int temp=digit;
        int target=0;

        while(temp)
        {
            target=target*10+1;
            temp--;
          //  cout<<"check";
        }

        //cout<<"ans "<<ans<<" "<<x/target<<"\n";
        cout<<ans+x/target<<"\n";

    }
}
