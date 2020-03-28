#include<bits/stdc++.h>
using namespace std;

int sum,kount=0;

int kountDig(int a)
{
    int send=0;
    if (a==0) return 1;
    else
    {   sum=0;
        label:
            sum=0;

        while(a)
        {
            sum=sum+a%10;
            a/=10;
        }
        //cout<<sum<<" "<<kount<<endl;
        kount++;
        if(sum>9)
        {

            a=sum;
            goto label;
        }

        return kount;
    }
}

//char s[100000000000000000];
//
//  char intToara(int n,int num)
//    {
//    int i;
//    char s[num];
//
//    for(i=0;i<num;i++)
//    {
//        s[i]=n%10+'0';
//        n=n/10;
//    }
//
//
//    }



int main()
{
    int i,sum=0,j,kopy,a,kd;

    string s;
    cin>>s;

    if(s.size()==1)
    {
        cout<<"0";
        return 0;
    }

    else
    {

         for(i=0; i<s.size(); i++)
        {
            sum=sum+s[i]-'0';
        }
        kount++;

    if(sum<=9)
    {
        cout<<kount;
        return 0;
    }
       // kopy=sum;
        kd=kountDig(sum);
       // intToara(sum,kd);


    cout<<kd;

}


}

    //cout<<sum<<" "<<j;


