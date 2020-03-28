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

     int t,i,flag=0,k;
    string ek,dui,test;
    cin>>t;
    for(k=0; k<t; k++)
    {
        flag=0;
        cin>>ek>>dui;
        sort(ek.begin(),ek.end());
        if(dui.size()<ek.size()) goto label;
        for(i=0; i<=dui.size()-ek.size(); i++)
        {
            test=dui.substr(i,ek.size());
           // cout<<test<<" ";
            sort(test.begin(),test.end());
            if(ek.compare(test)==0)
            {
                flag=1;
                break;
            }
        }
       label: !flag ? cout<<"NO"<<endl : cout<<"YES"<<endl;
    }

}



