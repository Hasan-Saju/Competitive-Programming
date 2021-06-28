#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int w1=max(a,b);
        int w2=max(c,d);

        vector<int>v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);

        sort(v.begin(),v.end());
        int h1=v[3];
        int h2=v[2];

        int wmx=max(w1,w2);
        int wmn=min(w1,w2);

        if(wmx==h1 and wmn==h2)
            cout<<"yEs\n";
        else
            cout<<"nO\n";
    }
}
