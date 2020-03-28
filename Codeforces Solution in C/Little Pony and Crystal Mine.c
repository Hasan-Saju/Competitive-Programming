#include<stdio.h>
int main()
{
    int n,row,i,k,l;
    scanf("%d",&n);



    for(row=1;row<=(n/2)+1;row++)
    {



           k= (n-((2*row)-1))/2;

            for(i=0;i<k;i++)
            {
                printf("*");
            }

           l=(2*row)-1;

             for(i=0;i<l;i++)
            {
                printf("D");
            }

                        for(i=0;i<k;i++)
            {
                printf("*");
            }


               printf("\n");





        }


k= n-2;




         for(row=1;row<=(n/2);row++)
         {

          l=row;

             for(i=0;i<l;i++)
            {
                printf("*");
            }








            for(i=0;i<k;i++)
            {
                printf("D");
            }
            k=k-2;




             for(i=0;i<l;i++)
            {
                printf("*");
            }

            printf("\n");








         }





    }
