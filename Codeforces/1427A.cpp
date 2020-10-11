#include<bits/stdc++.h>
using namespace std;

void print(vector<int> x)
{
    for(int i=0;i<x.size();i++)
        cout<<x[i]<<" ";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>ps,ng;
        int total=0,pos=0,neg=0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            total+=x;
            if(x>=0)
                pos+=x, ps.push_back(x);
            else if(x<0)
                neg+= (-1*x), ng.push_back(x);
        }

        if(total==0)
        {
            cout<<"No\n";
            continue;
        }
        cout<<"Yes\n";
        sort(ps.begin(),ps.end());
        reverse(ps.begin(),ps.end());
        if(pos>neg)
            print(ps),print(ng);
        else
            print(ng),print(ps);

    }
}
