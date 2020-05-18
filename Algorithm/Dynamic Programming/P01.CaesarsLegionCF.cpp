#include<bits/stdc++.h>
using namespace std;
#define mod 100000000

int rangf,rangh;
int dp[105][105][15][15];   //n dorker nai cz n = f+h

int process(int n,int f,int h, int rf, int rh)
{
    if(n==0)return 1;

    if(dp[f][h][rf][rh]!= -1) return dp[f][h][rf][rh];

    //fill foot
    int x=0;
    if(f>0 && rf>0)x= process(n-1, f-1, h, rf-1, rangh);

    //fill horse
    int y=0;
    if(h>0 and rh>0)y= process(n-1, f, h-1, rangf , rh-1);

    //cout<<x<<" "<<y<<endl;
    return dp[f][h][rf][rh] = (x+y) % mod;

}



int main()
{
    int nf,nh;
    cin>>nf>>nh>>rangf>>rangh;
    memset(dp,-1,sizeof(dp));

    cout<< process(nf+nh,nf,nh,rangf,rangh);


}

/*
step 01:  just solve the problem without any restriction
step 02:  add restrictions one by one
step 03:  at last introduce dp[][]

*/

///Problem Link
///https://codeforces.com/problemset/problem/118/D
