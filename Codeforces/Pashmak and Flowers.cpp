#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long n,kount=0,x,maxDiff,i,j,numMin=0,numMax=0,ans;

    cin>>n;
    vector<int>vec;

    for(i=0;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);
    }

    sort(vec.begin(),vec.end());

    maxDiff=vec[n-1]-vec[0];

    if(vec[0]==vec[n-1])
    {
        ans=(n*(n-1))/2;
    }

    else
    {

    for(i=0;i<n;i++)
    {
        if(vec[i]==vec[0])numMin++;
        else if(vec[i]==vec[n-1])numMax++;
    }
        ans=numMin*numMax;
    }


//    for(i=0;vec[i]==vec[0];i++)
//    {
//
//
//        for(j=n-1;j>=0;j--)
//        {
//            if(abs(vec[i]-vec[j])==maxDiff)kount++;
//            if(vec[j]<vec[n-1])break;
//
//        }
//    }
   // cout<<numMin<<" "<<numMax<<endl;
    cout<<maxDiff<<" "<<ans;
}
