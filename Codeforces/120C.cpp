#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,times,khaise,pigel=0,i,x;
    cin>>n>>k;
    vector<int>vec;
    for(i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
    }
    for(i=0;i<n;i++)
    {
        times=vec[i]/k;
        if(times>3)times=3;
        khaise=k*times;
        pigel=pigel+vec[i]-khaise;
        //cout<<pigel<<" ";
    }
    cout<<pigel;
}
