#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define si set<int>
#define FOR(i,n) for(int i=2;i<n;i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vi v;
    int n,i,x,sum=0,cost,a,b;

    while(true)
    {
        priority_queue<int,vector<int>,greater<int> >p;
        sum=0;
        cost=0;
        cin>>n;
        if(n==0)
            break;
        for(i=0; i<n; i++)
        {
            cin>>x;
            p.push(x);
        }
        while(p.size()>1)
        {
            a=p.top();
            p.pop();
            b=p.top();
            p.pop();
            sum=a+b;
            cost+=sum;
            p.push(sum);
        }
        cout<<cost<<endl;
//        p.clear();
    }

}

