#include<bits/stdc++.h>
using namespace std;
int main()
{
    int zero,one,two,three,i=0,flag=0,kount=0,even,odd,sum;
    cin>>zero>>one>>two>>three;
    even=zero+two;
    odd=one+three;
    sum=even+odd;
    int ara[sum+10];
    memset(ara,-1,sizeof(ara));

    if(even>=odd)
    {
        kount=0;
        for(i=1; i<=sum; i+=2)
        {
            kount++;
            if(kount>even)
                break;
            if(kount<=zero)
                ara[i]=0;
            else
                ara[i]=2;
        }
        kount=0;
        for(i=2; i<=sum; i+=2)
        {
            kount++;
            if(kount>odd)
                break;
            if(kount<=one)
                ara[i]=1;
            else
                ara[i]=3;
        }
    }
    else
    {
        kount=0;
        for(i=1; i<=sum; i+=2)
        {
            kount++;
            if(kount>odd)
                break;
            if(kount<=one)
                ara[i]=1;
            else
                ara[i]=3;
        }
        kount=0;
        for(i=2; i<=sum; i+=2)
        {
            kount++;
            if(kount>even)
                break;
            if(kount<=zero)
                ara[i]=0;
            else
                ara[i]=2;
        }

    }
    for(i=2; i<=sum; i++)
    {
        if(abs(ara[i]-ara[i-1])!=1||ara[i]==-1)
        {
            flag=1;
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES"<<endl;
    for(i=1; i<=sum; i++)
    {
        cout<<ara[i]<<" ";
    }


}
