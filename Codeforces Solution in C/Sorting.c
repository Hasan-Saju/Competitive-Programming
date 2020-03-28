 #include <stdio.h>
    void main()
    {

        int i, j, a, n, number[100],sl,sr,k;

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
         sl=sl+number[0];
            sr=sr+number[n-1];

        for(i=1,k=2;i<n ;i++,k++)
        {



           if(sr>sl)
           {
               sl=sl+number[i+1];
           } else sr=sr+number[n-k];



        }
        printf("%d",k);


    }
