#include<bits/stdc++.h>
using namespace std;

string s1,s2;
int dp[20][20],vis[20][20];

void path_print(int i,int j)
{
    if(i>=s1.size() or j>=s2.size()) return;

    if(s1[i]==s2[j])
    {
        cout<<s1[i];
        path_print(i+1,j+1);
    }
    else
    {
        if(dp[i+1][j]>dp[i][j+1])
        {
            path_print(i+1,j);
        }
        else path_print(i,j+1);
    }
    return ;
}









int lcs(int i,int j)
{
    if(i>=s1.size() or j>=s2.size()) return 0;
    if(vis[i][j]) return dp[i][j];

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
    s1 = "helloworld";
    s2 = "heo";

    cout<< lcs(0,0) <<endl;
    path_print(0,0);



}
