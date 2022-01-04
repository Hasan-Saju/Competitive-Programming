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
    //freopen("out.txt", "w", stdout);    //to write the output in a txt file
    //freopen("in.txt", "r", stdin);
    int x1,y1,r1,x2,y2,r2,c,dis,flag=0;
    cin>>x1>>y1>>r1>>x2>>y2>>r2;

    c =((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
    dis=sqrt(c);
    if(dis*dis!=c)
        {
            flag=1;
           // dis+=1;
        }

    if(x1==y1&&x2==y2&&r1==r2)
        cout<<"-1";
    else if((flag==0&&r1+r2==dis)||(flag==0&&abs(r1-r2)==dis))
        cout<<"1";
    else  if(((flag==0)&&dis>r1+r2)||((flag==1)&&dis+1>=r1+r2))
        cout<<"0";
    else
        cout<<"2";
}

