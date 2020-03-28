#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n,flag=0;
    scanf("%d",&n);

    char bus[n][5];
    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%c",&bus[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            if(bus[i][0]==bus[i][1])//||bus[i][3]==bus[i][4])
            {
                bus[i][0]='+';
                bus[i][1]='+';
                flag=1;
                break;
            }
            if(bus[i][3]==bus[i][4]&&!flag)//||bus[i][3]==bus[i][4])
            {
                bus[i][3]='+';
                bus[i][4]='+';
                flag=1;
                break;
            }
        }
        if(flag)
            break;
    }

    if(flag)
    {
        printf("YES");
        for(i=0; i<n; i++)
        {
            for(j=0; j<5; j++)
            {
                printf("%c",&bus[i][j]);
            }
        }

    }
    else
        printf("NO");

}
