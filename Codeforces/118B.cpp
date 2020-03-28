#include<bits/stdc++.h>
using namespace std;
int ara[10000];
int main()
{
    int n,num,flag,j,k,i,ar=0;
    cin>>n;

    for(i=0,k=0; i<n+1; i++,k=k+2)
    {
        j=2*n-k;
        while(j!=0)
        {
            cout<<" ";
            j--;

        }
        num=0;
        flag=1;
        j=1+k;
        while(j!=0)
        {
            if(flag<i+1)
            {
                cout<<num<<" ";
                num++;
                flag++;
            }
            else
            {
                if(num==0)cout<<num;
               else cout<<num<<" ";
                num--;
                flag++;
            }

            j--;
        }
        cout<<endl;
    }
//second part
//
//
//
 for(i=0,k=0; i<n; i++,k=k+2)
    {
        j=2+k;
        while(j!=0)
        {
            cout<<" ";
            j--;

        }
        num=0;
        flag=1;
        j=2*n-k;
        while(j!=1)
        {
            if(flag<=n-1-i)
            {
                cout<<num<<" ";
                num++;
                flag++;
            }
            else
            {
                if(num==0)cout<<num;
               else cout<<num<<" ";
                num--;
                flag++;
            }

            j--;
        }
        cout<<endl;
    }


}
