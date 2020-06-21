#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,mn=99999999;
    cin>>n;

    vector<int>even;
    vector<int>odd;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x%2==0)
            even.push_back(x);
        else
            odd.push_back(x),mn=min(mn,x);
    }
    if(odd.size()==0)
        cout<<"0";
    else
    {
        for(auto x:even )
            sum+=x;

        for(auto x:odd )
            sum+=x;

        if(odd.size()%2==0)sum-=mn;
    cout<<sum;
    }
}
