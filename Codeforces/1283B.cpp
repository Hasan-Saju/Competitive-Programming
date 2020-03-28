#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,i,n,k,choc,baki,extra,div;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>k;
        div=n/k;
        choc=div*k;
        baki=n-choc;
        extra=k/2;
        choc=choc+extra;
        if(choc>n)cout<<n<<endl;
        else cout<<choc<<endl;

    }
}
