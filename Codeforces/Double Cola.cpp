#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    string name[]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    while(n>5)
    {
        n=n/2-2;
    }
   cout<<name[n-1];
}
