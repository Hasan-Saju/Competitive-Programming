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
        vector<int>v;
        for(int j=0; j<n; j++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int first=-1,last=-1;
        for(int j=0; j<n-1; j++)
        {
            if(v[j]==v[j+1] and first==-1)
            {
                first=j;
            }
            if(v[j]==v[j+1])
            {
                last=j;
            }
        }
        if(first==last)
        {
            cout<<"0\n";
        }
        else if(last-first==1)
        {
            cout<<"1\n";
        }
        else
        {
            cout<<last-first-1<<"\n";
        }

    }
}
