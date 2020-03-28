#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,lives,m,p,change,count=0,x,i;
    scanf("%d %d",&num,&lives);

    int ara[num+5];
    x=lives;

    for(i=1; i<=num; i++)
    {
        scanf("%d",&ara[i]);
    }




 for(change=0;; change++)
	    {
	        p=x+change;
	        m=x-change;


         if(m<1&&p>num)
	            break;

	        if(p==m)
	        {
	            if(ara[p]==1)
	                count++;
	        }

	        else
	        {
	            if(m>1&&p<num)
	            {
	                 //if(m<1&&p>num)break;
	                 if(ara[m]&&ara[p])
	                    count=count+2;

	            }
	            else
	            {
	                if(m<1){ara[m]=0;}
	                if(p>num){ara[p]=0;}
	                if(ara[m]||ara[p])
	                    count++;

	            }
	        }

	    }
	    printf("%d",count);

	}
