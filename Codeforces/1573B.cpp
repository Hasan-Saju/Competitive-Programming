#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;

        map<int,int>x;
        map<int,int>y;

        for(int j=0; j<n; j++)
        {
            int a;
            cin>>a;
            x[a]=j;
        }
        for(int j=0; j<n; j++)
        {
            int a;
            cin>>a;
            y[a]=j;
        }

//        for(auto xa:y)
//            cout<<xa.first<<" "<<xa.second<<"\n";
//        cout<<"\n";

        int ans=INT_MAX;
        for(int j=2*n; j>0; j-=2)
        {
            ans=min(ans,y[j]+x[j-1]);
        }
        cout<<ans<<"\n";
        x.clear();
        y.clear();
    }
}

//531
//264

//5731
//2468
//2

//7531
//2468
//3
