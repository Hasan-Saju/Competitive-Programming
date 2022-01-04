#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3,s4;
    cin>>s1>>s2;
    cout<<s1<<" "<<s2<<endl;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s3>>s4;
        if(s3==s1)
        {
            s1=s4;
            cout<<s1<<" "<<s2<<endl;
        }
        else if(s3==s2)
        {
            s2=s4;
            cout<<s1<<" "<<s2<<endl;
        }
        else if(s4==s1)
        {
            s4=s2;
            cout<<s3<<" "<<s4<<endl;
        }
        else if(s4==s2)
        {
            s4=s1;
            cout<<s3<<" "<<s4<<endl;
        }
    }
}
