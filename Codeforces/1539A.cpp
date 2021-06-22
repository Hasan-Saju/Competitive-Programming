#include<bits/stdc++.h>
using namespace std;

#define ull long long

int main()
{
    ull test;
    cin>>test;

    for(ull i=0; i<test; i++)
    {
        ull people, interval, time;
        cin>>people>>interval>>time;

        ull  highestStart = (people-1)*interval;
        ull  highestEnd = highestStart + time ;
        ull  per = time/interval;

        ///full or half
        ull  full = people-per;
        if(full<0)
            full = 0;

        ull  fullAns = full*per;

        ull  partial = people-full;

        ull temp=partial-1;
        ull  partAns = (temp*(temp+1)) /2 ;

        ///printf("highestStart: %lld\n highestEnd: %lld\n Per: %lld\n full: %lld\n Part: %lld\n PartAns: %d\n ",highestStart,highestEnd,per,full,partial,partAns);

        ull  ans = partAns + fullAns;
        cout<<ans<<"\n";
    }
}
