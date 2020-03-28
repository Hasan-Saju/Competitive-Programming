
#include <stdio.h>
#include<stdlib.h>
    int main()
    {

        int i, j, a, n, number[100],sum=0,x;

        scanf("%d", &n);

        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);

        for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (number[i] > number[j])
                {

                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;

                }

            }

        }

        for (i = 0; i < n; i=i+2)
           {
               x=number[i]-number[i+1];
               x=abs(x);
               sum=sum+x;
           }
           printf("%d",sum);

    }
