#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r,x=1,choto,boro,i;
    cin>>n>>l>>r;
    choto=n-(l-1);
    for(i=n-l+2;i<=n;i++)
    {
        choto=choto+pow(2,x);
        x++;
    }
    x=0;
    boro=0;
    for(i=1;i<=n;i++)
    {
        boro=boro+pow(2,x);
        if(r>1)x++;
        r--;
    }
    cout<<choto<<" "<<boro;
}
