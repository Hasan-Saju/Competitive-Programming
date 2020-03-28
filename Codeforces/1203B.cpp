#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k,x,t,j,kount,lindex,area;
    vector<int>v;
    cin>>t;

    for(j=0; j<t; j++)
    {
        cin>>n;
        kount=0;
        for(i=0; i<4*n; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        lindex=v.size()-1;
        area=v[0]*v[lindex];
        for(i=0,k=0; i<2*n; i=i+2,k=k+2)
        {
            if(v[i]==v[i+1]&&v[lindex-k]==v[lindex-k-1]&&(v[i]*v[lindex-k])==area)
            {
                kount++;
            }
        }
        if(kount==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
            v.clear();
    }
}
