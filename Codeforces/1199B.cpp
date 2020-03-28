#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int h,l;
    cin>>h>>l;
    long double x;
    x=(long double)(l*l-h*h)/(2*h);
    cout.precision(13);
    cout<<fixed<<x;
}
