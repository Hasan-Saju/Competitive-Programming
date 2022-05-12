#include<bits/stdc++.h>
using namespace std;

int diff(string s1, string s2)
{
    int ret=0;
    for(int p=0;p<s1.size();p++)
    {
        int a=s1[p]-'a';
        int b=s2[p]-'a';
        //cout<<a-b<<"\n";
        if(a>=b)
            ret+= (a-b);
        else
            ret+= (b-a);
    }
    //cout<<s1<<" "<<s2<<" "<<ret<<"\n";
    return ret;
}

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,m;
        cin>>n>>m;
        vector<string>v;
        for(int j=0; j<n; j++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }

        int ans=INT_MAX;
        int temp;
        for(int j=0; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                temp=diff(v[j],v[k]);
                ans=min(ans,temp);
            }
        }

        cout<<ans<<"\n";
    }
}
