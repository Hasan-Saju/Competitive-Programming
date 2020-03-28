#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a,b;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a>b){swap(a,b);}
        if((a+b)%3==0&&(2*a)>=b)cout<<"yEs"<<endl;
        else cout<<"nO"<<endl;
    }
}
