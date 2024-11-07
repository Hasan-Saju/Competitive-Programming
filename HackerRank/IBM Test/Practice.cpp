#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'fizzBuzz' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void fizzBuzz(int n) {
    for(int i=1; i<=n; i++)
    {
        if(i%5==0 and i%3==0)
            cout<<"FizzBuzz\n";
        else if(i%5!=0 and i%3==0)
            cout<<"Fizz\n";
        else if(i%5==0 and i%3!=0)
            cout<<"Buzz\n";
        else
            cout<<i<<"\n";
    }
}

int main()
{
    fizzBuzz(15);
}
