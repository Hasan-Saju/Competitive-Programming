#include<bits/stdc++.h>
using namespace std;

int main()
{
    int start = 10000;
    double interest = 1.005;
    int month =0;
    while(start>0)
    {
        start = start*interest;
        start = start-500;
        month++;
    }
    cout<<month;
    return 0;
}
