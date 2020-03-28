#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,i,last;
    cin>>n;
    vector<int>s;
    vector<int>c;
    vector<int>ansc;
    for(i=0; i<n; i++)
    {
        cin>>x>>y;
        s.push_back(x);
        c.push_back(y);
    }
    x=s[0];
    y=c[0];
    ansc.push_back(y);
    cout<<y<<" ";
    last=x;
    for(i=1; i<n; i++)
    {
        x=s[i];
        if(x>last)
        {
            //   s.push_back(x);
            last=x;
            y=c[i];
            ansc.push_back(c[i]);
            cout<<y<<" ";
        }

    }
    sort(ansc.begin(),ansc.end());
    if(ansc.size()<3)
        cout<<"-1";
    else
        cout<<ansc[0]+ansc[1]+ansc[2];
}
