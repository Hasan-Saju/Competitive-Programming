#include<bits/stdc++.h>
using namespace std;

#define d(s)    cout<<s<<"\n"

string s1,s2;
int dp[150][150],vis[150][150];
string longcs;

void path_print(int i,int j)
{
    if(i>=s1.size() or j>=s2.size())
        return;

    if(s1[i]==s2[j])
    {
        //cout<<s1[i];
        longcs+=s1[i];
        path_print(i+1,j+1);
    }
    else
    {
        if(dp[i+1][j]>dp[i][j+1])
        {
            path_print(i+1,j);
        }
        else
            path_print(i,j+1);
    }
    return ;
}


int lcs(int i,int j)
{
    if(i>=s1.size() or j>=s2.size())
        return 0;
    if(vis[i][j])
        return dp[i][j];

    vis[i][j] = 1;

    if(s1[i]==s2[j])
    {
        return dp[i][j] = 1 + lcs(i+1,j+1);
    }
    else
    {
        return dp[i][j] = max(lcs(i+1,j),lcs(i,j+1));
    }
}

int main()
{
    string s;
    while(getline(cin,s))
    {
        stringstream ss(s);
        ss>>s1>>s2;
        lcs(0,0);
        path_print(0,0);


        int l1=0,l2=0;
        //cout<<longcs<<"\n";
        for(int i=0; i<longcs.size(); i++)
        {
            //first lcs value r ag porjonto s1,s2 print
            while(l1<s1.size() and s1[l1]!=longcs[i])
            {
                cout<<s1[l1];
               // d(1);
                //cout<<s[l1]<<longcs[i]<<" bros"<<l1<<" "<<i<<endl;
                l1++;
            }
            while(l2<s2.size() and s2[l2]!=longcs[i] )
            {
                cout<<s2[l2];
                //d(2);
                l2++;
            }
            cout<<longcs[i];
           // d(3);
            l1++;
            l2++;
        }
        //lcs er por baki ta
        while(l1<s1.size())
        {
            cout<<s1[l1];
           // d(3);
            l1++;
        }
        while(l2<s2.size())
        {
            cout<<s2[l2];
            //d(4);
            l2++;
        }
        cout<<"\n";

        memset(dp,0,sizeof(dp));
        memset(vis,0,sizeof(vis));
        longcs.clear();

    }

}
