#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    char ch;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;


    int ara[3];
    ara[0]=0;
    ara[1]=0;
    ara[2]=0;

    if(s1[1]=='>')
    {
        ara[s1[0]-'A']=1;
        ara[s1[2]-'A']=0;
    }
    else
    {
        ara[s1[0]-'A']=0;
        ara[s1[2]-'A']=1;

    }



        if(s2[1]=='>')
    {
        ara[s2[0]-'A']=ara[s2[0]-'A']+1;
        ara[s2[2]-'A']=ara[s2[2]-'A']+0;
    }
    else
    {
        ara[s2[0]-'A']=ara[s2[0]-'A']+0;
        ara[s2[2]-'A']=ara[s2[2]-'A']+1;

    }




        if(s3[1]=='>')
    {
        ara[s3[0]-'A']=ara[s3[0]-'A']+1;
        ara[s3[2]-'A']=ara[s3[2]-'A']+0;
    }
    else
    {
        ara[s3[0]-'A']=ara[s3[0]-'A']+0;
        ara[s3[2]-'A']=ara[s3[2]-'A']+1;

    }

   // cout<<ara[0]<<ara[1]<<ara[2]<<endl;


    if(ara[0]==ara[1]||ara[1]==ara[2]||ara[2]==ara[0])cout<<"Impossible";

    else
    {
        for(i=0;i<3;i++)
        {
            if(ara[i]==0)
            {
                ch='A'+i;
                cout<<ch;
            }
        }

        for(i=0;i<3;i++)
        {
            if(ara[i]==1)
            {
                ch='A'+i;
                cout<<ch;
            }
        }

        for(i=0;i<3;i++)
        {
            if(ara[i]==2)
            {
                ch='A'+i;
                cout<<ch;
            }
        }


    }
}
