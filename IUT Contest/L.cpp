#include<bits/stdc++.h>
using namespace std;
int ara[110][1100];
int uni[110];

int main()
{
    int row,col,i,j,x,sum=0;
    cin>>row>>col;

    memset(uni,0,110);

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {

            cin>>x;
            ara[i][j]=x;

        }
    }

    for(i=1; i<=row; i++)
    {
       // int kount=0;

        for(j=1; j<=col; j++)
        {
           int kount=1;

            x=ara[i][j];
            if(x!=-1)
            {


           // cout<<x<<" ";
            if(x==ara[i-1][j-1])
                kount++;
            if(x==ara[i-1][j])
                kount++;
            if(x==ara[i-1][j+1])
                kount++;
            if(x==ara[i][j-1])
                kount++;
            if(x==ara[i][j+1])
                kount++;
            if(x==ara[i+1][j-1])
                kount++;
            if(x==ara[i+1][j])
                kount++;
            if(x==ara[i+1][j+1])
                kount++;

            if(kount>=2)
            {
                uni[x]=1;
                //cout<<"M"<<kount<<" ";
            }
            }

        }
    }
   // cout<<endl;
    for(i=0; i<110; i++)
    {
      //  cout<<uni[i]<<" ";
        sum=sum+uni[i];
    }
    cout<<sum;


}
