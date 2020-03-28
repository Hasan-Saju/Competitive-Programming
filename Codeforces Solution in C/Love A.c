#include<stdio.h>
#include<string.h>
int main()
{
  char str[51];
  int exp=0,other,ans,i;

  gets(str);

  int len=strlen(str);

  for(i=0;i<len;i++)
  {
      if(str[i]=='a')exp++;
  }
  other=len-exp;

  if(exp>len/2)ans=len;

  else ans=2*exp-1;

  printf("%d",ans);

}
