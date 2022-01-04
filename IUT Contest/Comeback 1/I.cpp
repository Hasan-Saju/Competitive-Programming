#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,a,p;
    cin>>l>>a>>p;

    vector<int>vec;
    vec.push_back(l/1);vec.push_back(a/2);vec.push_back(p/4);
    sort(vec.begin(),vec.end());
    cout<<(vec[0]*1)+(vec[0]*2)+(vec[0]*4);

}
