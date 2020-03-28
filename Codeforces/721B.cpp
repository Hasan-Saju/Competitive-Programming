#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,best=0,worst=0,btime,wtime;
    string s;
    vector<int>vec;
    cin>>n>>k;
    for(i=0;i<=n;i++)
    {
        cin>>s;
        vec.push_back(s.size());
    }
    for(i=0;i<n;i++)
    {
        if(vec[i]<vec[n])best++;
        if(vec[i]<=vec[n])worst++;
    }
    btime=best+((best/k)*5)+1;
    wtime=worst+(((worst-1)/k)*5);

    cout<<btime<<" "<<wtime;

}
