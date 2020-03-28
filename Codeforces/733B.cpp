#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int> >v;
    vector<pair<int,int> >::iterator it;
    long long n,l,r,diff,index,maxChan,left=0,right=0,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>l>>r;
        left+=l;right+=r;
        v.push_back(make_pair(l,r));
    }
    diff=abs(left-right);
     maxChan=0;
     index=0;
     for(i=0;i<v.size();i++)
     {
         maxChan=abs((left-v[i].first+v[i].second)-(right-v[i].second+v[i].first));
        // cout<<maxChan<<" ";
         if(maxChan>diff){diff=maxChan;index=i+1;}
     }
    cout<<index;

}
