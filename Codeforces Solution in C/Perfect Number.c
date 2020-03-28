#include<stdio.h>
int main()
{
    int one,two,three,four,five,i,j,k,l,m,n,o,p,q,r,x,ans,count=0;
    scanf("%d",&x);

    for(r=0; r<10; r++)
    {
        for(q=0; q<10; q++)
        {
            for(p=0; p<10; p++)
            {
                for(o=0; o<10; o++)
                {
                    for(n=0; n<10; n++)
                    {
                        for(m=0; m<10; m++)
                        {
                            for(l=0; l<10; l++)
                            {
                                for(k=0; k<10; k++)
                                {
                                    for(j=0; j<10; j++)
                                    {
                                        for(i=0; i<10; i++)
                                        {
                                            if((i+j+k+l+m+n+o+p+q+r)==10)
                                                count++;
                                            if(count==x)
                                                goto label;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

label:
    //printf("%d %d %d %d %d\n",i,j,k,l,m);
    ans=i+(j*10)+(k*100)+(l*1000)+(m*10000)+(n*100000)+(o*1000000)+(p*10000000)+(q*100000000)+(r*1000000000);
    printf("%d",ans);
}
