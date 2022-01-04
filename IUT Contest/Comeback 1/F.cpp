#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,sum;
    cin>>x>>y>>z;
    vector<int>vec;
    vec.push_back(x);vec.push_back(y);vec.push_back(z);
    sort(vec.begin(),vec.end());
    sum=vec[0]+vec[1];
    if(vec[2]<sum)cout<<"0";
    else cout<<vec[2]-sum+1;
}
