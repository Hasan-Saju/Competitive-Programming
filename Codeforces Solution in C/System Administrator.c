#include<stdio.h>
int main()
{

    int n,server,alive,dead,t_alive=0,t_alive2=0,t_dead=0,t_dead2=0,check,check2,i;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&server,&alive,&dead);


    if(server==1)
        {
           t_alive=t_alive+alive;
           t_dead=t_dead+dead;

        }

        else
            {
           t_alive2=t_alive2+alive;
           t_dead2=t_dead2+dead;

             }




    } check=(t_alive+t_dead)/2;
    check2=(t_alive2+t_dead2)/2;



    if(t_alive>=check)printf("LIVE\n");
             else printf("DEAD\n");

              if(t_alive2>=check2)printf("LIVE\n");
             else printf("DEAD\n");




}
