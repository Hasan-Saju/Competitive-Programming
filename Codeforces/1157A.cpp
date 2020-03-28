#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sizee=0;
    set<int>s;
    cin>>n;
    s.insert(n);
    for(;;)
    {
        n=n+1;
        while(n%10==0)
        {
            n=n/10;
        }
        s.insert(n);
     //   cout<<n<<"->"<<s.size()<<" ";
        // sizee=s.size();
        if(sizee==s.size())
            break;
        if(s.size()>sizee)
            sizee=s.size();


    }
    cout<<s.size();
}
