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
    string l,t;
    cin>>l>>t;
    int kount=0;
    cout<<max(abs(l[0]-t[0]),abs(l[1]-t[1]))<<endl;
    while(l!=t)
    {
        if(l[0]<t[0])
            {
                l[0]+=1;
                cout<<"R";
            }
        else if(l[0]>t[0])
            {
                l[0]-=1;
                cout<<"L";
            }
            if(l[1]>t[1])
            {
                l[1]-=1;
                cout<<"D";
            }
            else if(l[1]<t[1])
            {
                l[1]+=1;
                cout<<"U";
            }
            cout<<endl;


    }





}



