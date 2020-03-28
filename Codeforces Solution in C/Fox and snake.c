#include<stdio.h>
int main()
{
    int r,c,row,col,d;
    scanf("%d %d",&r,&c);

    for(row=1; row<=r; row++)
    {
        for(col=1; col<=c; col++)
        {
            d=1;
            if(row%2!=0)
                printf("#");
            else
            {
                while(d<=c)
                {

                    if(row==2||row==6||row==10||row==14||row==18||row==22||row==26||row==30||row==34||row==38||row==42||row==46||row==50)
                    {
                        if(d==c)
                        {
                            printf("#");
                            goto label;
                        }
                        else
                            printf(".");
                        d++;
                    }
                    else
                    {
                        if(d==1)
                            printf("#");
                        else
                            printf(".");
                            d++;
                        if(d==c+1)
                            goto label;
                    }

                }
            }
        }
label:
        printf("\n");
    }
}
