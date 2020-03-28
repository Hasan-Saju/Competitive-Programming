#include<bits/stdc++.h>
using namespace std;
vector<int>vec;
//vector<int>::iterator it;
int vis[100000];
int main()
{
    int n,i,x,fdigit,sdigit;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
    }
    fdigit=*max_element(vec.begin(),vec.end());
  //  it=find(vec.begin(),vec.end(),fdigit);
   // vec[distance(vec.begin(),it)]=1;
    cout<<fdigit<<" ";

    for(i=0;i<n;i++)
    {
        if((fdigit%vec[i]==0)&&(vis[vec[i]]==0))
        {
             vis[vec[i]]=1;
            vec[i]=0;

        }
    }
    sdigit=*max_element(vec.begin(),vec.end());
    cout<<sdigit;
//    for(i=0;i<n;i++)
//    {
//        cout<<vec[i]<<" ";
//    }
}
