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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vi v;
    int n,i,x;
    double median=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.pb(x);
    }
    vector<double>ans;
    priority_queue<int>max_heap;
    priority_queue<int,vector<int>,greater<int> >min_heap;

    for(i=0;i<v.size();i++)
    {
        if(v[i]<=median)
        {
            max_heap.push(v[i]);
        }
        else
        {
            min_heap.push(v[i]);
        }

        if(max_heap.size()>min_heap.size()+1)
        {
            min_heap.push(max_heap.top());
            max_heap.pop();
        }
        else if(min_heap.size()>max_heap.size()+1)
        {
            max_heap.push(min_heap.top());
            min_heap.pop();
        }


        if(min_heap.size()==max_heap.size())
        {
            median=(double)(max_heap.top()+min_heap.top())/2.0;
        }
        else if(min_heap.size()>max_heap.size())
        {
            median=(double)min_heap.top();
        }
        else  median=(double)max_heap.top();
        ans.pb(median);
    }
       FOR(i,ans.size())
       {
           cout<<fixed;
           cout<<setprecision(1)<<ans[i]<<endl;
       }

}
