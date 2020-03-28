#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,x,kount=0,step,temp;
    cin>>n;
    vector<int> a;
    set<int> s;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
        s.insert(x);
    }
    step=0;
     if(s.size()==1)cout<<"1";
     else
     {


         for(i=0;;i++)
    {
        if(i>n-1)i=0;
        temp=a[i]-step;
      // cout<<temp<<" "<<step<<endl;
        step++;

        if(temp!=0)kount++;
        if(kount>n-1)kount=0;
        if(temp<=0) break;

    }
    //cout<<endl;

    cout<<i+1;
     }
}
