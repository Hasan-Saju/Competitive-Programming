#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >v;
vector<int> percent;
int main()
{
    long long kount=0,solve,sub,totalAccept=0,avgAccept=0,n,p=0,i;

    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>solve>>sub;
        p= (solve*100)/sub;
        v.push_back(make_pair(solve,sub));
        //cout<<p<<" ";
        percent.push_back(p);
        totalAccept+=solve;
    }
   // cout<<endl;
    if(totalAccept%n==0)
    avgAccept=totalAccept/n;
    else avgAccept=(totalAccept/n)+1;

    for(i=0; i<n; i++)
    {
        if(v[i].first>=150 and v[i].first>=avgAccept and percent[i]>=70)
        {
           // cout<<"Yes"<<" ";
            kount++;
            }
    }
    cout<<kount;//<<" "<<avgAccept<<" "<<v[3].first<<" "<<percent[3] ;
}
