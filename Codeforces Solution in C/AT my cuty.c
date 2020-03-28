#include<stdio.h>
int main()
{
   int a,b,c,e;
   char d;
   char f;
   printf("Enter our first meet day: ");
   scanf("%d %d %d", &a,&b,&c);
   if(a==8 && b==1 && c==2019)
   {
       printf("Yeah! I met the CR first time on that day\n");
   }
   else printf("Wrong!!I hate you!!!! Break up!\n");
   printf("Can we be the best friends forever??\n");
   printf("Y or N\n");
   printf("Answer: ");
   scanf(" %c", &d);
   if(d=='Y') printf("I'll never hurt you.");
   if(d=='N') printf("Why are you lying? I know you want to.");

   printf("Do you trust me?\n");
   printf("What percentage? \n");
   printf("100 or something less?\n");
   printf("Answer: ");
   scanf(" %d", &e);

   if(e==100) {
        printf("Then will you be with me,forever?\n");
        printf("Y or N?");
        printf("Answer: ");
        scanf(" %c", &f);
        if(f=='Y') printf("I'm very happy to have a friend like you!\nBye my coding instructor.");

        if(f=='N') printf("Amake chara r kake friend banaba shuni!\nBye!");
         }
   else
   {
         printf("I know you trust me 100%! Don't dhong!\n");
         printf("BYE!!!");

   }


   return 0;
}
