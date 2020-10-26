#include<bits/stdc++.h>
using namespace std;


int n;// maximum 10
int cost[10][10];
int dp[1<<10][10];


int turnOn(int x,int pos) {
    return x | (1<<pos);
}

bool isOn(int N,int pos) {
    return (bool)(N & (1<<pos));
}

int call(int mask,int pos)
{
    if(mask == (1<<n) - 1) return 0;
    //if(pos==n) return 10000;
    if(dp[mask][pos]!=-1) return dp[mask][pos];

    int ret = 10000;

    for(int i=0;i<n;i++)
    {
        if(isOn(mask,i)) continue;

        ret = min(ret, cost[pos][i] + call(turnOn(mask,i),pos+1));

    }

    return dp[mask][pos] = ret;

}


int main()
{

    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>cost[i][j];
    }

    memset(dp,-1,sizeof(dp));
    cout<<call(0,0)<<endl;
}
