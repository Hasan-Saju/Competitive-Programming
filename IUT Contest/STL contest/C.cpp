#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define si set<int>
#define FOR(i,n) for(int i=0;i<n;i++)
int main()
{
    int n,i,top;
     int x,y;
        stack<int>sta;
        stack<int>maxs;
    cin>>n;
    for(i=0;i<n;i++)
    {

        cin>>x;
        if(x==1)
        {
            cin>>y;
            sta.push(y);
            if(maxs.empty()==true)maxs.push(y);
            else if(y>=maxs.top())maxs.push(y);
        }
       else if(x==2)
        {
            top=sta.top();
            sta.pop();
            if(top==maxs.top())maxs.pop();
        }
      else  if(x==3)
        {
            cout<<maxs.top()<<endl;
        }

    }
}

