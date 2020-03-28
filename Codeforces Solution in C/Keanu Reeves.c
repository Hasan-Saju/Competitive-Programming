#include<stdio.h>
#include<string.h>

int main()
{
    int n,yes=0,i,one=0,zero=0,shunno=0,ek=0;
    scanf("%d",&n);

    char s[n];
    scanf("%s",s);


    for(i=0; i<n; i++)
    {
        if(s[i]=='0')
            zero++;
        else
            one++;

    }
    if(n==1)
    {
        printf("1\n%s",s);

    }
    else
    {

        if(zero==one)
        {
            printf("2\n");
            printf("%c ",s[0]);
            for(i=1; i<n; i++)
            {
                printf("%c",s[i]);
            }
        }
        else
        {
            //  printf("%c%c ",s[0],s[1]);

            printf("3\n%c ",s[0]);
            if(s[0]=='0')
                zero--;
            else
                one--;

            for(i=1; i<n; i++)
            {
                printf("%c",s[i]);
                if(s[i]=='1')ek++;
                else shunno++;

                if(shunno!=ek)break;



            }
            printf(" ");
            for(i=i+1;i<n;i++)
            {
                printf("%c",s[i]);
            }
        }


    }




}
