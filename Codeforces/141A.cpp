#include<bits/stdc++.h>
using namespace std;

int rough[29];
int check[29];

int main()
{
    int i;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;

    for(i=0;i<s1.length();i++)
    {
        rough[s1[i]-'A']=rough[s1[i]-'A']+1;
    }

    for(i=0;i<s2.length();i++)
    {
        rough[s2[i]-'A']=rough[s2[i]-'A']+1;
    }

    for(i=0;i<s3.size();i++)
    {
        check[s3[i]-'A']=check[s3[i]-'A']+1;
    }


//    for(i=0;i<30;i++)
//    {
//        cout<<rough[i];
//    }
//    cout<<endl;
//    for(i=0;i<30;i++)
//    {
//        cout<<check[i];
//    }
//    cout<<endl;

    for(i=0;i<29;i++)
    {
        if(rough[i]!=check[i])
        {
        cout<<"NO";
        return 0;
        }
    }
    cout<<"YES";
}
