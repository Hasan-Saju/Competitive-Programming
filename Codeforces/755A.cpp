#include<bits/stdc++.h>
using namespace std;

bool prime(int x)
{
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)return false;
    }
    return true;
}

int main()
{
    int n,z,m;
    cin>>n;
    for(m=1;m<=1000;m++)
    {
        z=n*m+1;
        bool check=prime(z);
            if(check==false)
            {
                cout<<m;
                return 0;
            }
    }

}
