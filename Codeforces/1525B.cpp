#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int>v;
        bool zero =true;

        for(int j=1;j<=n;j++)
        {
            int x;
            cin>>x;
            v.push_back(x);

            if(j!=x)
                zero=false;
        }
        if(zero)
            cout<<"0\n";
        else if(v[0]==1 or v[n-1]==n)
            cout<<"1\n";
        else if(v[0]==n and v[n-1]==1)
            cout<<"3\n";
        else cout<<"2\n";

    }
}
