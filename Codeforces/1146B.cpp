#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,ind;
    char ch;
    string t,s,sp,save;
    cin>>t;
    save=t;
    t.erase(remove(t.begin(), t.end(), 'a'), t.end());
    sp=t.substr(0,t.size()/2);

    s=save.substr(0,save.size()-t.size()/2);

    if(save==s+sp&&t.size()%2==0)
        cout<<s;
    else
        cout<<":(";
    // cout<<t<<" "<<sp<<" "<<s<<" "<<sp+s;


}
