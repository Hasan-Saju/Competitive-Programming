#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,i,kount=0;
    scanf("%d",&n);
    char str[n];
    cin>>str;

    for(i=0; i<n; i++)
    {
        if(str[i]=='x')
            kount++;
        else
        {
            if(kount>=3)
            {
                sum=sum+kount-2;
                kount=0;
            }
            kount=0;

        }
    }

    if(kount>=3)
    {
        sum=sum+kount-2;

    }

    printf("%d",sum);

    return 0;
}
