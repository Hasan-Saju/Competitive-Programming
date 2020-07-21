#include<bits/stdc++.h>
using namespace std;

#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);

int ara[26];

int main()
{
    fast
    int n,t;
    string s1,s2;
    cin>>n>>t>>s1>>s2;
    string ans="";
    bool noAns=false;

    int match=n-t,same=0;

    for(int i=0; i<n; i++)
    {
        if(s1[i]==s2[i])
            same++;
    }

    int NoTchange=same,change1=0,change2=0;
    int matchbosha=match;
    change1=match-same;
    change2=change1;

    if(same>=match)
    {
        for(int i=0; i<n; i++)
        {
            if(s1[i]==s2[i] and NoTchange>0 and match>0)
                ans+=s1[i],NoTchange--,match--;
            else
            {
                memset(ara,0,sizeof(ara));
                ara[s1[i]-'a']=1;
                ara[s2[i]-'a']=1;

                 if(ara[0]==0)
                    ans+= "a";
                else if(ara[1]==0)
                    ans+= "b";
                else if(ara[2]==0)
                    ans+= "c";
            }

        }

    }

    else if(n<same+(change1*2))
    {
        noAns=true;
    }
    else
    {


        for(int i=0; i<n; i++)
        {
            if(s1[i]==s2[i])
                ans+=s1[i];
            else if(change1>0)
                ans+=s1[i],change1--;
            else if(change2>0)
                ans+=s2[i],change2--;
            else
            {
                memset(ara,0,sizeof(ara));
                ara[s1[i]-'a']=1;
                ara[s2[i]-'a']=1;

                if(ara[0]==0)
                    ans+= "a";
                else if(ara[1]==0)
                    ans+= "b";
                else if(ara[2]==0)
                    ans+= "c";
            }
        }

    }

    //cout<<change1<<" "<<change2<<" "<<noAns;
    if(noAns or change1>0 or change2>0)
        cout<<"-1";
    else
        cout<<ans;


}
