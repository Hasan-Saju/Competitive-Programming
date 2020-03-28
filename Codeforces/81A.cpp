
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
   // char ans[1000000];

    string st,ans;
    cin>>st;
    stack<char>s;
    int i,j;
    s.push(st[0]);

    for(i=1;i<st.size();i++)
    {
      //  cout<<s.top()<<st[i]<<endl;
        if(s.empty())s.push(st[i]);
        else if(s.top()==st[i]) s.pop();
        else s.push(st[i]);
    }
while(!s.empty())
{
    ans.pb(s.top());
   // ans[i]=s.top();
   s.pop();
   // i++;
}

reverse(ans.begin(),ans.end());

//for(i=i-1;i>=0;i--)cout<<ans[i];
cout<<ans;
}


