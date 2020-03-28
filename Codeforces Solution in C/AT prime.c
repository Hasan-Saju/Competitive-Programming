#include<stdio.h>
int main()
{
   int q1, q2, q3, q4, mid, semester, attendance, quiz, total, p;
   printf("Enter the quiz marks: ");
   scanf("%d %d %d %d", &q1, &q2, &q3, &q4);
   printf("Enter attendance mark: ");
   scanf("%d", &attendance);
   printf("Enter the mid semester mark: ");
   scanf("%d", &mid);
   printf("Enter the semester final mark: ");
   scanf("%d", &semester);

   if(q1<q2 && q1<q3 && q1<q4)
   {
       quiz=q2+q3+q4;
       printf("The best three quiz marks are: %d %d %d", q2, q3, q4);
   }
    else if(q2<q1 && q2<q3 && q2<q4)
   {
       quiz=q1+q3+q4;
       printf("The best three quiz marks are: %d %d %d", q1, q3, q4);
   }
   else if(q3<q1 && q3<q2 && q3<q4)
   {
       quiz=q1+q2+q4;
       printf("The best three quiz marks are: %d %d %d", q1, q2, q4);
   }
   else if(q4<q1 && q4<q3 && q4<q2)
   {
       quiz=q1+q2+q3;
       printf("The best three quiz marks are: %d %d %d\n", q1, q2, q3);
   }
   total=(quiz+mid+semester+attendance);
   printf("The total marks: %d\n", total);

   p=total/3;
   printf("Percentage %d%%\n", p);

   if(total>=80)
   {
       printf("Grade: A+");
   }
   else if(total>=75)
   {
       printf("Grade: A");
   }
    else if(total>=70)
   {
       printf("Grade: A-");
   }
    else if(total>=65)
   {
       printf("Grade: B+");
   }
    else if(total>=60)
   {
       printf("Grade: B");
   }
    else if(total>=55)
   {
       printf("Grade: B-");
   }
    else if(total>=50)
   {
       printf("Grade: C");
   }
   else
   {
       printf("Grade: F");
   }
   return 0;

}
