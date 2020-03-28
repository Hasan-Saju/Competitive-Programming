#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int len,j=0,len2,i;
    char str[110],st[300];

    fflush(stdin);
    gets(str);

    len=strlen(str);

    for(i=0; i<len; i++)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'||str[i]=='y'||str[i]=='Y');
            else
            {
                st[j]='.';
                j++;
                if(str[i]>='A'&&str[i]<='Z')
                {
                    st[j]=tolower(str[i]);
                    j++;

                }
                else
                   {

                st[j]=str[i];
                j++;
                   }


            }
    }

for(i=0;i<j;i++)
{
    printf("%c",st[i]);
}


}
