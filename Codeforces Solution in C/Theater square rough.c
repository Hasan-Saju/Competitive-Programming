#include<stdio.h>
int main()
{
    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);
    {
        printf("%d\n", ceil(n/a)*ceil(m/a));
    }
}
