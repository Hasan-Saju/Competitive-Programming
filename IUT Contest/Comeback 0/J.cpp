#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,x,i;
    cin>>n>>a>>b;
    vector<int>vec;
    for(i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
        if(vec[b-1]==vec[b])cout<<"0";
        else cout<<vec[b]-vec[b-1];
}
