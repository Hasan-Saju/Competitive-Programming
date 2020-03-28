
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
    int four=0,seven=0,i,x;
    string s;
    cin>>s;
    vi vec;
    for(i=0;i<s.size();i++)
    {
       x= s[i]-'0';
       vec.push_back(x);
    }
     for(i=0;i<s.size();i++)
     {
         if(vec[i]==4)four++;
        else if(vec[i]==7)seven++;
     }
    if(four==0&&seven==0) cout<<"-1";
    else if(four>=seven)cout<<"4";
    else if(seven>four)cout<<"7";
   // cout<<endl<<four<<" "<<seven<<" ";

}


