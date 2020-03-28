#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,trans=1,con;
    cin>>a>>b;
    con=b-a;
    for(i=0;i<con;i++)
    {
        a=a+1;
        trans=trans*(a%10);
        trans=trans%10;
       // cout<<trans<<endl;
       if(trans==0)
       {
           cout<<"0";
           return 0;
       }
    }
    cout<<trans;
}
