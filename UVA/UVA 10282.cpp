#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
//#define ff first
//#define ss second
#define vi vector<int>
#define si set<int>
#define FOR(i,n) for(int i=0;i<n;i++)
int main()
{
    map<string, string>m;
    string first,second,temp;
    getline(cin,temp);

    while(temp!="")
    {
        stringstream ss(temp);
        ss>>first>>second;
        m[second]=first;
        getline(cin,temp);

    }
    while(getline(cin,temp))
    {
        if(m[temp].size()==0)m[temp]="eh";
        cout<<m[temp]<<endl;
    }

}

