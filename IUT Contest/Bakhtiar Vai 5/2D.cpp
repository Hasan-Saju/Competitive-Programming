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

    int n,k,x,i,least,big,kount=0;
    cin>>n>>k;
    priority_queue<int,vector<int>,greater<int>>pq;

    FOR(i,n)
    {
         cin>>x;
         pq.push(x);
    }
    while(pq.size()>1&&pq.top()<k)
    {
        least=pq.top();
        pq.pop();
        big=pq.top();
        pq.pop();
        x=(least+2*big);
        pq.push(x);
        kount++;
    }
    if(pq.top()<k)cout<<"-1";
    else
    cout<<kount;




}

