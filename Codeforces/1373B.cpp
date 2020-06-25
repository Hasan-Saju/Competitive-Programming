#include<bits/stdc++.h>
using namespace std;

#define ll          long long

#define fastTT        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define NL          "\n"


void A()
{
    cout<<"DA"<<NL;
}
void B()
{
    cout<<"NET"<<NL;
}
int main()
{
    fastTT
    ll test;
    cin>>test;
    while(test--)
    {
        string s,temp="";
        cin>>s;

        ll ans=0;


        for(;;)
       {
            bool flag=false;
            temp.clear();
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]!=s[i+1] and i!=s.size()-1)
                {
                    i++;
                    ans++;
                    flag=true;
                    continue;
                }
                else
                    temp+=s[i];
            }

            s=temp;
            if(!flag or temp.size()==0)
                break;
        }



        if(ans%2==0)
            B();
        else if(ans%2==1 )
            A();

    }

}

