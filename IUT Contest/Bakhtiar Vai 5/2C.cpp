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
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    fast
  //  priority_queue<int,vector<int>,greater<int> >pq;
  set<int>pq;
  set<int>::iterator it;
    int n,x,y;
    cin>>n;
    FOR(i,n)
    {
        cin>>x;
        if(x==1)
        {
            cin>>y;
            pq.insert(y);
        }
        else if(x==2)
        {
            cin>>y;
            it=pq.find(y);
            pq.erase(it);
        }
        else{
                it=pq.begin();
            cout<<*it<<endl;
        }
    }


}

