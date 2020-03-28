#include<bits/stdc++.h>
using namespace std;

int main()

{
    long long t,n,i,j,total;
    scanf("%lld",&t);

    for(i=0;i<t;i++)
    {
        cin>>n;
        long long goal[n],foul[n];
        long long maxx=0;
        memset(goal,0,n);
        memset(foul,0,n);

        for(j=0;j<n;j++)
        {
            cin>>goal[j];
        }
        for(j=0;j<n;j++)
        {
            cin>>foul[j];
        }
        for(j=0;j<n;j++)
        {
            total=(goal[j]*20)-(foul[j]*10);
            if(total<0)total=0;
            if(total>maxx)maxx=total;

        }
        cout<<maxx<<endl;

    }

}
