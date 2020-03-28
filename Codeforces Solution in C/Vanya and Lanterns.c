#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,len,i,j,high,low,max_diff,diff,swap;
    double gap,top,bottom,ans;
    scanf("%d %d",&num,&len);

    int ara[num+10],ara2[num+10];

    for(i=0;i<num+5;i++)
    {
        ara[i]=0;
        ara2[i]=0;
    }

    for(i=0;i<num;i++)
    {
        scanf("%d",&ara[i]);
    }
    high=0;
    low=len;


    for(i=0;i<num;i++)
    {
        for(j=0;j<num-1;j++)
        {
            if(ara[j]>ara[j+1])
            {
                swap=ara[j+1];
                ara[j+1]=ara[j];
                ara[j]=swap;
            }
        }
    }









    for(i=0;i<num;i++)
    {
        if(ara[i]>high)high=ara[i];
        if(ara[i]<low)low=ara[i];
        diff=abs(ara[i]-ara[i+1]);
        ara2[i]=diff;
    }



    top=len-high;
    bottom=low-0;
    max_diff=0;
    for(i=0;i<num-1;i++)
    {
        if(ara2[i]>max_diff)max_diff=ara2[i];
        else max_diff=max_diff;
    }


    gap=(double)max_diff/2.0;

top=(double)top;
bottom=(double)bottom;

  if(top>=bottom&&top>=gap)ans=top;
  else if(bottom>=top&&bottom>=gap)ans=bottom;
  else ans=gap;




    printf("%.10lf",ans);






}
