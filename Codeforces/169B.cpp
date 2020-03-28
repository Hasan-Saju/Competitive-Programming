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

    int a,s,dig,i,j;
    cin>>a>>s;
    vi vec,sec;
    for(;;)
    {
        dig=a%10;
        vec.push_back(dig);
        a=a/10;
        if(a==0)break;
    }
    reverse(vec.begin(),vec.end());

     for(;;)
    {
        dig=s%10;
        sec.push_back(dig);
        s=s/10;
        if(s==0)break;
    }
    sort(sec.begin(),sec.end(),greater<int>());

    for(i=0;i<sec.size();i++)
    {
        for(j=0;j<vec.size();j++)
        {
            if(sec[i]>vec[j])
            {
                vec[j]=sec[i];
                break;
            }

        }
    }

    for(j=0;j<vec.size();j++)
    {
        cout<<vec[j];
    }
}


