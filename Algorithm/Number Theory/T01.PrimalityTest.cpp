#include<bits/stdc++.h>
using namespace std;

bool Prime(int n)
{
    if(n==1)
        return false;           ///prime na

    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)                  /// i diye vag jay and n/i diyeo vag jay , duitai divisor //ekta divisor root n er niche ekta upore
            return false;   //prime na
    }
    return true;            ///Prime
}

int main()
{
    int x;
    cin>>x;
    if(Prime(x))
        cout<<x<<" is a Prime.";
    else
        cout<<x<<" is not a Prime.";
}
