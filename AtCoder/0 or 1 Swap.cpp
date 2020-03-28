#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x,kount=0;
    cin>>n;
    vector<int>vec;
    vector<int>sorted;


    for(i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
        sorted.push_back(x);
    }

    sort(sorted.begin(),sorted.end());

    for(i=0;i<vec.size();i++)
    {
        if(sorted[i]!=vec[i])kount++;
    }
   // cout<<kount<<endl;
    if(kount==2||kount==0)cout<<"YES";
    else cout<<"NO";

    return 0;

}
