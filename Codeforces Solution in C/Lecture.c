#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);

    char first[m][15],second[m][15],lecture[n][15];
    int fl[m],sl[m];

    for(i=0;i<m;i++)
    {
        scanf("%s %s",&first[i],&second[i]);
        fl[i]=strlen(first[i]);
        sl[i]=strlen(second[i]);
    }

    for(j=0;j<n;j++)
    {
        scanf("%s",&lecture[j]);
    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(!strcmp(lecture[i],first[j]))
            {
                if(sl[j]<fl[j])strcpy(lecture[i],second[j]);
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%s ",lecture[i]);
    }


}
