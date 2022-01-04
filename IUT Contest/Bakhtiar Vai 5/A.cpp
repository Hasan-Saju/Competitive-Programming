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
//typedef int,string pi;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string,int> norm;
    map<int,string> rev;
    set<int> sett;
    set<int>::iterator it;
    int i,n,x,num;
    string st;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        if(x==1)
        {
            cin>>st>>num;
            sett.insert(num);
            norm[st]=num;
            rev[num]=st;
        }
        else if(x==2)
        {
            cin>>st>>num;
            sett.erase(norm[st]);
            sett.insert(num);
            norm[st]=num;
            rev[num]=st;
        }
        else if(x==3)
        {
            cin>>st;
            it=sett.begin();
            cout<<rev[*it]<<" "<<i+1<<endl;
            sett.erase(*it);

        }

    }

}

