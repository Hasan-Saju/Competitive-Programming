#include<bits/stdc++.h>
using namespace std;
vector<int>vec;
vector<int>sortt;


int main()
{
    vector<int>::iterator it;


    int n,i,j,x;
    scanf("%d",&n);

    if(n>1000)
    {




    for(i=0; i<n; i++)
    {
        cin>>x;
        vec.push_back(x);
    }



    j=0;

     sortt.assign(vec.begin(),vec.end());

    for(i=0; i<n-1; i++)
    {

    if(vec[i+1]>vec[i])cout<<vec[i+1]<<" ";
    else
    {


     it=upper_bound(sortt.begin()+i+1,sortt.end(),vec[i]);

     x=*it;
    // cout<<x<<"   ";
     if(x>vec[i])cout<<x<<" ";
     else cout<<"-1"<<" ";
    }


    }


cout<<"-1";
    }

    else{
             int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }

    j=0;

    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {
        if(ara[j]>ara[i])
        {
            cout<<ara[j]<<" ";
            break;
        }
        if(j==n-1)
        {
            cout<<"-1"<<" ";
            break;
        }

        }

    }
    cout<<"-1";






    }

}






//
