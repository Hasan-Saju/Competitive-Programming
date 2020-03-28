#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j;
    scanf("%d",&t);
    char vec[100000+50];

    for(i=0;i<t;i++)
    {
        int kount=0;
        cin>>vec;
        vec[0-1]='.';
        vec[strlen(vec)]='.';



    for(j=0;j<strlen(vec);j++)
    {
        // label:

        if(vec[j]=='1')
        {
            vec[j]='.';

            if(vec[j-1]=='0')vec[j-1]='1';
            else if(vec[j-1]=='1')vec[j-1]='0';

            if(vec[j+1]=='0')vec[j+1]='1';
            else if(vec[j+1]=='1')vec[j+1]='0';

        }


    }
//    for(j=0;j<=strlen(vec);j++)
//    {
//
//        if(vec[j]=='1')goto label;
//
//    }

    for(j=1;j<=strlen(vec);j++)
    {
        if(vec[j]=='.')kount++;
    }
    if(kount==strlen(vec)-1)printf("WIN");
    else printf("LOSE");

    //cout<<endl<<kount<<" "<<strlen(vec)-1;

    }

}





/*

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,i;
    cin>>t;
    for(i=0; i<t; i++)
    {
        int n,j,kount=0;
        string ara;
        cin>>ara;
        n=ara.length();

        if(ara[0]=='0')
            cout<<"NO";

        else
        {
            for(j=1;j<n; j++)
            {
                if(ara[j]=='0')
                    kount++;
            }


        if(kount==n-1)
            cout<<"YES";
        else
            cout<<"NO";
        }

    }




}
*/
