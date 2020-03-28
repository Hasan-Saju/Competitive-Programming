#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,x,two,sum=0,fsum=0;
    cin>>n>>k;
    vector<int>vec;
    for(i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
        sum+=x;
    }
    two=vec[0]+vec[1];
    if(two<k)
    {
        vec[1]=vec[1]+k-two;
    }

    for(i=1;i<n;i++)
    {
        two=vec[i]+vec[i+1];
     if(two<k)
    {
        vec[i+1]=vec[i+1]+k-two;
    }
    }
    for(i=0;i<n;i++)
    {
     fsum+=vec[i];
    }

cout<<fsum-sum<<endl;

    for(i=0;i<n;i++)
    {
    cout<<vec[i]<<" ";
    }
}

