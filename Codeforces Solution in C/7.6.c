#include<stdio.h>
double pi=3.14;
void my_fnc(){
    pi=3.1416;
    return;
}
int main(){
printf("%lf",pi);
my_fnc();
printf("%lf\n",pi);
return 0;
}
