#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<int>vec;
    vec.push_back(a);vec.push_back(b);vec.push_back(c);vec.push_back(d);
    sort(vec.begin(),vec.end());
    if(vec[0]+vec[1]+vec[2]==vec[3]||vec[0]+vec[3]==vec[1]+vec[2])cout<<"YES";
        else cout<<"NO";

}
