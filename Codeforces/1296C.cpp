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
void subString(string s, int n)
{
    string temp;
    int sum=0,ansL,ansR,sizee;
    for (int i = 0; i < n; i++)
    {
        for (int len = 1; len <= n - i; len++)
        {
            //cout << s.substr(i, len) << endl;

            temp=temp.substr(i,len);

            for(i=0; i<temp.size(); i++)
            {
                if(temp[i]=='L')
                    sum-=1;
                else if(temp[i]=='R')
                    sum+=1;
                else if(temp[i]=='U')
                    sum+=5;
                else if(temp[i]=='D')
                    sum-=5;
            }
            if(sum==0&&sizee>temp.size())
            {
                ansL=i+1;
                ansR=i+len+1;
                sizee=temp.size();
            }

        }
    }
    cout<<ansL<<" "<<ansR<<endl;

}

int main()
{
    int t,n,i;
    vi v;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        subString(s,s.length());
    }

}

