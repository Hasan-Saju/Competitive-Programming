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
ll ara[10000000];
//ll ara2[10000000];
//ll ara3[10000000];
//ll cum[10000000];
int main()
{
    ll n1,n2,n3,save=0,sum=0,i,check=0;
    cin>>n1>>n2>>n3;
    stack<ll> s1,s2,s3;
    for(i=0; i<n1; i++)
    {
        cin>>ara[i];
    }
    for(i=n1-1; i>=0; i--)
    {
        sum+=ara[i];
        s1.push(sum);
    }
    memset(ara,0,sizeof(ara));


    for(i=0; i<n2; i++)
        cin>>ara[i];
    sum=0;
    for(i=n2-1; i>=0; i--)
    {
        sum+=ara[i];
        s2.push(sum);
    }
    memset(ara,0,sizeof(ara));

    for(i=0; i<n3; i++)
        cin>>ara[i];

    sum=0;
    for(i=n3-1; i>=0; i--)
    {
        sum+=ara[i];
        s3.push(sum);
    }
    memset(ara,0,sizeof(ara));

//    while(!s1.empty())
//    {
//        cout<<s1.top()<<" ";
//        s1.pop();
//    }
//    cout<<endl;
//    while(!s2.empty())
//    {
//        cout<<s2.top()<<" ";
//        s2.pop();
//    }
//
//    cout<<endl;
//    while(!s3.empty())
//    {
//        cout<<s3.top()<<" ";
//        s3.pop();
//    }
//
//    cout<<endl;

    while(true)
    {

        if(s1.top()==s2.top()&&s2.top()==s3.top())
        {
            cout<<s2.top();
            check=1;
            break;
        }

        if(s1.top()>=s2.top()&&s1.top()>=s3.top())
        {
            s1.pop();
          //  cout<<"1";
        }
        else if(s2.top()>=s1.top()&&s2.top()>=s3.top())
        {
            s2.pop();
         //   cout<<"2";
        }
        else  if(s3.top()>=s2.top()&&s3.top()>=s1.top())
        {
            s3.pop();
            //cout<<"3";
        }
         if(s1.empty()||s2.empty()||s3.empty())
        {
            cout<<"0";
            break;
        }


    }
//if(!check)cout<<"0";
//cout<<check;
    return 0;







}



