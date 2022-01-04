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
    int n,x,k;
    cin>>n;
    stack<string>stackk;
    string s,str;
    while(n--)
    {
        cin>>x;
        if(x==1)
        {
            cin>>str;
            stackk.push(s);
            s+=str;

           // cout<<s<<endl;
        }
        else if(x==2)
        {
            cin>>k;
            stackk.push(s);
            s.erase(s.size()-k);

          //  cout<<s<<endl;
        }
        else if(x==3)
        {
            cin>>k;
            cout<<s[k-1]<<endl;
           // cout<<s<<endl;
        }
        else if(x==4)
        {
            s=stackk.top();
            stackk.pop();
        //    if(!stackk.empty())

            //cout<<s<<endl;
        }
    }
}

