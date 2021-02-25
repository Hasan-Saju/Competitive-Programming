#include<bits/stdc++.h>
using namespace std;


int Log_two(int x,int y)
{
    double ans=log2((double)x/(double)y);

    int intAns=(int)ans;
    //cout<<"\n fn "<<intAns<<" "<<x<<" "<<y<<"\n";

    if(ans-intAns==0.00 and intAns>0)
    {
      //  cout<<"boo\n";
        return intAns-1;
    }
    else return intAns;
}

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

        int ans=0;
        for(int j=1;j<n;j++)
        {
            ans+= Log_two(max(v[j-1],v[j]),min(v[j-1],v[j]));
            //cout<<ans<<" ";
        }
        //cout<<"\n";

        cout<<ans<<"\n";
        v.clear();
    }
}
