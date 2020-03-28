#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    int n,i;string s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        m[s]=m[s]+1;
        if(m[s]==1)cout<<"OK"<<endl;
        else cout<<s<<m[s]-1<<endl;
    }
}
