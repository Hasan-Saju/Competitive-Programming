#include<stdio.h>
int main()
{
    int ara[]= {1,4,6,8,9,11,14,15,20,25,33,83,97,99,100};
    int low_indx=0;
    int high_indx=15;
    int mid_indx;
    int num=97;
    mid_indx=(high_indx+low_indx)/2;

    while(low_indx<=high_indx)
    {

        if(num==ara[mid_indx])
            break;
        if(num<ara[mid_indx])
        {
            high_indx=mid_indx-1;
        }
        else
        {
            low_indx=mid_indx+1;
        }

    }
    if(low_indx>high_indx)
        printf("%d is not in the array\n",num);
    else
    {
        printf("%d is found in %d th array",ara[mid_indx],mid_indx);
    }
    return 0;
}
