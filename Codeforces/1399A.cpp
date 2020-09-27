#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());

        bool imp=false;
        for(int i=0;i<n-1;i++)
        {
            if(v[i+1]-v[i]>1)
                imp=true;
        }
        if(imp)
            cout<<"NO\n";
        else cout<<"YES\n";
    }
}
