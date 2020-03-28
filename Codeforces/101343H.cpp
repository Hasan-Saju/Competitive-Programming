#include<bits/stdc++.h>
using namespace std;
#define N 100000
int ara[N];
int n;

void machine(int a,int b)
{
    if(b==n)
    {
        cout<<"-1 ";
        return;
    }
    if(ara[b]>ara[a])
    {
        cout<<ara[b]<<" ";
        return;
    }
    else machine(a,b+1);


}

int main()
{
    int i,j;
    cin>>n;

    for(i=0;i<n;i++)
        cin>>ara[i];

    for(i=0;i<n;i++)
    {
        j=i+1;
        machine(i,j);
    }



}
