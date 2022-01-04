#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,kount=0,i,j;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
        sort(ara,ara+n);
        for(i=0;i<n;i++)
        {
            if(ara[i])
            {
            for(j=i+1;j<n;j++)
            {
                if(ara[j]%ara[i]==0)ara[j]=0;
            }
            }

        }
        for(i=0;i<n;i++)
        {
            if(ara[i])kount++;
        }
        cout<<kount;
}
