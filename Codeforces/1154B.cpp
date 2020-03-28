#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,akar,x,ek,dui,tin;
    cin>>n;
    set<int>s;
    set<int>::iterator it;

    for(i=0; i<n; i++)
    {
        cin>>x;
        s.insert(x);
    }

    akar=s.size();
    //sort(s.begin(),s.end());
    it=s.begin();
    ek=*it;
    ++it;dui= *it;++it;tin= *it;
    if(akar==3&&abs(ek-dui)==abs(dui-tin))
        cout<<tin-dui;
    else if(akar==2&&(ek+dui)%2==0)
        cout<<(dui-ek)/2;
    else if (akar==2)
        cout<<dui-ek;
    else if(akar==1)
        cout<<"0";
    else cout<<"-1";

}
