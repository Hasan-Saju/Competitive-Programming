#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,i;
    cin>>t;

    for(i=0;i<t;i++)
    {
        long long k,p,n,problem,solve,total;
        cin>>k>>p>>n;
        problem=k*n;
        solve=p*n;
        total=problem-solve;
        if(total<0)total=0;
        cout<<total<<endl;
    }
}
