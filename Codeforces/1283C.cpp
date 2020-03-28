#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,kount=0,k,i,j,f,z,half=0,x;
    cin>>n;
    //int refr[n];
    //int ara[n];
     vector<int>refr;
    vector<int>ara;
    vector<int>ind;
    vector<int>num;
    for(i=0; i<=n; i++)
        //refr[i]=i;
       {
           refr.push_back(i);
       }
       ara.push_back(0);
    for(i=1; i<=n; i++)
    {
        cin>>x;
         ara.push_back(x);
        if(ara[i]!=0)
            refr[ara[i]]=0;
        if(ara[i]==0)
            ind.push_back(i);
    }
    for(i=1; i<=n; i++)
    {
        if(refr[i]!=0)
        {
            num.push_back(refr[i]);
            kount++;
        }
    }

//
    k=kount;
    sort(num.begin(),num.end());
    sort(ind.begin(),ind.end(),greater<int>());

    if(k%2==0)
    {
        for(i=0; i<k; i++)
    {
        if(num[i]==ind[i])
        {
            if(i+1>k-1)
             swap(num[i],num[i-1]);
             else
                swap(num[i],num[i+1]);
           // cout<<"t";
        }

    }
        for(i=0; i<k; i++)
        {
            ara[ind[i]]=num[i];
        }
    }
    else
    {
        half=k/2;
        swap(num[half],num[half-1]);
         for(i=0; i<k; i++){

        if(num[i]==ind[i])
        {
            if(i+1>k-1)
             swap(num[i],num[i-1]);
             else
                swap(num[i],num[i+1]);
           // cout<<"t";
        }
         }
        for(i=0; i<k; i++)
        {
            ara[ind[i]]=num[i];
        }
    }

 //
    for(i=1; i<=n; i++)
    {
        cout<<ara[i]<<" ";
    }
}
