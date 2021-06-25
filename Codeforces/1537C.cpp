#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int x=0; x<t; x++)
    {

        int n;
        cin>>n;

        vector<int>v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());

        int mn=INT_MAX;
        int one=-1;
        int two=-1;

        for(int i=1; i<n; i++)
        {
            if(v[i]-v[i-1]<=mn)
            {
                mn=v[i]-v[i-1];
                one = i-1;
                two = i;
            }
        }

        cout<<v[one]<<" ";
        bool first=false;
        bool second=false;

        for(int i=one; i<n; i++)
        {
            if(one==i)
                continue;

            if(two==i)
                continue;

            cout<<v[i]<<" ";
        }
        for(int i=0; i<one; i++)
        {
            if(one==i)
                continue;

            if(two==i)
                continue;

            cout<<v[i]<<" ";
        }
        cout<<v[two]<<"\n";
    }
}
