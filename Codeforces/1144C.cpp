#include<bits/stdc++.h>
using namespace std;
vector<int>ara;
vector<int>vec;
int main()
{
    int n;
    cin>>n;
    int batil=0,i,x;
    for(i=0; i<n; i++)
    {
        cin>>x;
        ara.push_back(x);
    }
    sort(ara.begin(),ara.end());
    for(i=0; i<n-2; i++)
    {
        if(ara[i]==ara[i+1]&&ara[i+1]==ara[i+2])
            batil=1;
    }
    if(batil)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    for(i=0; i<n-1; i++)
    {
        if(ara[i]==ara[i+1])
        {
            vec.push_back(ara[i+1]);
            ara.erase(ara.begin()+i);
            n--;
        }
    }
    sort(ara.begin(),ara.end());
    sort(vec.begin(),vec.end(),greater<int>());
    cout<<ara.size()<<endl;
    for(i=0; i<ara.size(); i++)
    {
        cout<<ara[i]<<" ";
    }
    cout<<endl;
    cout<<vec.size()<<endl;
    for(i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

}
