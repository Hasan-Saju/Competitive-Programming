#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,i,sum=0,possible=0,kount=0,total_seat=0;
    cin>>n;

    vector<int>vec;
    list<int>mylist;
    list<int>::iterator it;

    for(i=0; i<n; i++)
    {
        cin>>x;
        vec.push_back(x);
        total_seat=x+total_seat;
    }

    for(i=0; i<n; i++)
    {
        if(i==0)goto label;
        if(2*vec[i]<=vec[0])
        {
            label:
         sum=sum+vec[i];
         kount++;
         mylist.push_back(i);
         if(sum>total_seat/2)break;
        }


    }
    if(sum>total_seat/2)
        possible=1;

    if(possible)
    {
       cout<<kount<<endl;
      // cout<<"1"<<" ";

     for(it=mylist.begin();it!=mylist.end();it++)
     {
         cout<<*it+1<<" ";

     }

    }

    else cout<<"0";

    return 0;
}
