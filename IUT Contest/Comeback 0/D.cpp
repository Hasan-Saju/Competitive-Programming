#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r,a,maxx,minn,diff;
    cin>>l>>r>>a;
    if(l==r)
    {
        cout<<2*(l+a/2);
        return 0;
    }
    else if(l>r)
    {
        maxx=l;
        minn=r;
    }
    else if(r>l)
    {

        maxx=r;
        minn=l;
    }
    diff=maxx-minn;
    if(diff<=a)
       {
        a=a-diff;
        a=a/2;
        cout<<2*(maxx+a);

       }

    else
    {
        cout<<2*(minn+a);
    }
    //cout<<minn<<" "<<diff;


}
