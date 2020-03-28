#include<bits/stdc++.h>
using namespace std;
int ara[10];

int main()
{
    int n,i,j,z;
    cin>>n;

    string s;
    cin>>s;

    for(i=0; i<n; i++)
    {
        if(s[i]=='L')
        {
            j=0;
            while(1)
            {
                if(ara[j]==0)
                {
                    ara[j]=1;
                    break;

                }
                j++;
            }
        }
        else if(s[i]=='R')
        {
            z=9;
            while(1)
            {
                if(ara[z]==0)
                {
                    ara[z]=1;
                    break;
                }
                z--;
            }



        }
        else
        {
            ara[s[i]-'0']=0;
        }


    }
    for(i=0; i<10; i++)
        cout<<ara[i];




}
