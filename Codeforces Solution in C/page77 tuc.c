#include<stdio.h>
int main()
{
    int ans,count;
    int again;
    for(count=1;count<11;count++){
        printf("What is %d + %d ?",count,count);
        scanf("%d",&ans);


        if(ans==count+count)printf("Right!\n");
        else{
            printf("sorry ,you are wrong\n");
            printf("try again\n");

            printf("what is %d + %d?",count,count);
            scanf("%d",ans);
            /*commennt*/
            if(ans==count+count)printf("Right!\n");
            else
                printf("wrong the ans is %d\n",count+count);
        }
    }return 0;
}
