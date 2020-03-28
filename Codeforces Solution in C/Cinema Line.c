#include<stdio.h>
#include<stdlib.h>

struct set
{
    int a;
}ara[100000];


int main()
{
    int n,i,khuchra=0,flag=1,k_fifty;
    scanf("%d",&n);




    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i].a);

    }


    for(i=0; i<n; i++)
    {


        if(ara[i].a==25)
            khuchra++;

        else if(ara[i].a==50)
        {
            if(!khuchra)
            {
                flag=0;
                break;
            }
            else
            {


                khuchra--;
                k_fifty++;
            }
        }

        else if(ara[i].a==100)
        {
            if(khuchra<=2||k_fifty<=1&&khuchra==0)
            {
                flag=0;
                break;
            }
            else
            {
                if(k_fifty>0)
                {
                    k_fifty-- ;
                    khuchra--;
                }
                else if(!k_fifty)
                {
                    khuchra-=3;
                }

            }
        }


    }

    if(!flag)
        printf("NO");
    else
        printf("YES");
}
