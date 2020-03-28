#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,yes=0,i,j;
    cin>>n;

    char l[2*n], m[n], r[2*n];

    for(i=0,j=0;i<n;i++,j=j+2)
    {
        cin>>l[j]>>l[j+1]>>m[i]>>r[j]>>r[j+1];
    }


     for(i=0,j=0;j<n;j++,i=i+2)
     {
         if(l[i]=='O'&&l[i+1]=='O')
         {
             l[i]='+';
             l[i+1]='+';
             yes=1;
             break;
         }

          if(r[i]=='O'&&r[i+1]=='O')
         {
             r[i]='+';
             r[i+1]='+';
             yes=1;
             break;
         }

     }
     if(!yes)cout<<"NO";
     else{
            cout<<"YES"<<endl;

     for(i=0,j=0;i<n;i++,j=j+2)
    {
        cout<<l[j]<<l[j+1]<<m[i]<<r[j]<<r[j+1]<<endl;
    }

     }
}
