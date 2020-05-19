#include<bits/stdc++.h>
using namespace std;

string first,second;
int dp[105][105];

int EditDistance(int f,int s)
{
    if(f==0)
        return s;
    if(s==0)
        return f;

    if(dp[f][s] != -1)
        return dp[f][s];

    if(first[f-1]==second[s-1])  //last okkhor same hoile konar ta ans
        return dp[f][s]= EditDistance(f-1,s-1);

    else
        return dp[f][s]= 1+ min( min(EditDistance(f-1,s), EditDistance(f,s-1) ), EditDistance(f-1,s-1) ); // same na so sobcheye choto+1
}

int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>first>>second;
    cout<<EditDistance(first.size(),second.size());
}
