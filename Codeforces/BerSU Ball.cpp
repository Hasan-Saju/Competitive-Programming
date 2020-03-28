#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
using namespace std;
int main()
{
    int boy,girl,i,j,countt=0;
    cin>>boy;
    int ba[boy];
    for(i=0; i<boy; i++)
        cin>>ba[i];

    cin>>girl;
    int ga[girl];
    for(i=0; i<girl; i++)
        cin>>ga[i];

    sort(ba,ba+boy);
    sort(ga,ga+girl);

    // if(boy>girl)
    //{
    for(i=0; i<girl; i++)
    {
        for(j=0; j<boy; j++)
        {
            if(ga[i]==ba[j]||ga[i]==ba[j]+1||ga[i]==ba[j]-1)
            {
                ba[j]=1000;
                break;
            }
   //         else if(ga[i]==ba[j]+1||ga[i]==ba[j]-1)
     //       {
       //         ba[i]=1000;
         //       break;
           // }


        }

    }

    //  }

    for(i=0; i<boy; i++)
    {
        if(ba[i]==1000)
            countt++;
    }
    cout<<countt;
    return 0;





}

