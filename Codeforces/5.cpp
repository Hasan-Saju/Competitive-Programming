#include<bits/stdc++.h>
using namespace std;

class Solution
{

    string s1,s2,resultString="";
    int dp[1001][1001],vis[1001][1001];

    void path_print(int i,int j)
    {
        if(i>=s1.size() or j>=s2.size())
            return;

        if(s1[i]==s2[j])
        {
            cout<<s1[i];
            resultString+=s1[i];
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

public:
    string longestPalindrome(string s)
    {
        s1=s;
        reverse(s.begin(),s.end());
        s2=s;
        int lengthResult=lcs(0,0);
        path_print(0,0);
        return resultString;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    string s="babad";
    obj.longestPalindrome(s);
}




