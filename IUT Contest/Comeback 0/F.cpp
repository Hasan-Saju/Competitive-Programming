#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n,x,y,i,right=0,left=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x>0)right++;
        else left++;
    }
    if(left>=n-1||right>=n-1)cout<<"Yes";
    else cout<<"No";

}
