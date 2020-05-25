#include<bits/stdc++.h>
using namespace std;

bool Prime(int n)
{
    if(n<=1)
        return false;

    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(Prime(x))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }

}


