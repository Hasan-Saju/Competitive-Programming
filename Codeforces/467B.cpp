#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,i,j,kount=0,ans=0;
    char buffer[10000];
    cin>>n>>m>>k;
    int ara[m+1];
    for(i=0;i<m+1;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<m;i++)
    {
        ara[i]=ara[i]^ara[m];
    }
  //  for(i=0;i<m;i++)
    //    cout<<ara[i]<<" ";

         for(i=0;i<m;i++)
         {
             kount=0;
            itoa(ara[i],buffer,2);
            //cout<<buffer<<endl;
            for(j=0;j<strlen(buffer);j++)
            {
                if(buffer[j]=='1')kount++;
            }
            if(kount<=k)ans++;
         }
         cout<<ans;

}
