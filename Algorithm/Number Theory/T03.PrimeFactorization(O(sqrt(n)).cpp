#include<bits/stdc++.h>
using namespace std;

void primeFact(int n)
{
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            int kount=0;
            while(n%i==0)
                kount++, n=n/i;
            cout<<i<<" -> "<<kount<<"times\n";
        }
    }
    if(n>1)
    cout<<n<<" -> "<<"1 "<<"times\n";
}

int main()
{

}
