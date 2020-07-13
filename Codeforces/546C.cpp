#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    queue<int>f,s;

    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        int z;
        cin>>z;
        f.push(z);
    }

    cin>>x;
    for(int i=0;i<x;i++)
    {
        int z;
        cin>>z;
        s.push(z);
    }

    int battle=0;

    while(!f.empty() and !s.empty())
    {
        ++battle;

        int ft=f.front();
        int st=s.front();
        //cout<<ft<<" "<<st<<"\n";
        if(ft>st)
        {
            f.pop(), s.pop();
            f.push(st), f.push(ft);
        }
        else
        {
            f.pop(), s.pop();
            s.push(ft), s.push(st);
        }
        if(battle>1000)break;

    }

    if(f.empty())
    {
        cout<<battle<<" "<<"2";
    }
    else if(s.empty())
    {
        cout<<battle<<" "<<"1";
    }
    else
        cout<<"-1";


}
