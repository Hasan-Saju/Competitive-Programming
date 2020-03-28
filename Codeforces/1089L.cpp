#include<bits/stdc++.h>
using namespace std;

vector<long long>v[1000005];
int main()
{
    vector<long long>rough;
    vector<long long>finall;
    vector<long long>ind;
    set<long long>::iterator it;
    set<long long >sett;
    long long n,k,i,j,x,sum=0;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>x;
        sett.insert(x);
        rough.push_back(x);
    }
    for(it=sett.begin(); it!=sett.end(); it++)
    {
        x=*it;
        ind.push_back(x);
    }
    for(i=0; i<n; i++)
    {
        cin>>x;
        v[rough[i]].push_back(x);
    }
    for(i=0; i<sett.size(); i++)
    {
        sort(v[ind[i]].begin(),v[ind[i]].end(),greater<int>());
        for(j=1; j<v[ind[i]].size(); j++)
        {
            x=v[ind[i]][j];
            finall.push_back(x);
            // cout<<x<<"("<<i<<j<<")";
        }
    }
    sort(finall.begin(),finall.end());
//    for(i=0; i<finall.size(); i++)
//      cout<<finall[i]<<" ";
//      cout<<sett.size()<<endl<<v[0][0];
    for(i=0; i<k-sett.size(); i++)
        sum+=finall[i];
    cout<<sum;
    //cout<<endl<<sett.size();
}
