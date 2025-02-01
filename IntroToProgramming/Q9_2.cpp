#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int bal=10000;
     double interest = 1.005;
     int month=0;
     while(bal>0)
     {
         bal = bal*interest;
         bal = bal-500;
         month = month+1;
     }

    cout<<month;
    return 0;
 }

