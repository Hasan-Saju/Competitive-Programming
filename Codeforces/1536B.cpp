#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        map<string,bool>mp;
        int step=1;
        for(step=1; step<=n; step++)
        {

            for(int i=0; i<n; i++)
            {
                if(i+step>n)
                    break;
                string temp=s.substr(i,step);
                //cout<<temp<<"\n";
                mp[temp]=true;
            }
        }

//        for(auto x:mp)
//        {
//            cout<<x.first<<" "<<x.second<<"\n";
//        }

        char first = 'a';
        bool found=false;
        string ans,check;
        for(int i=0; i<26; i++)
        {
            check = "";
            check=first;
            if(mp.find(check)==mp.end())
            {
                ans=check;
                found=true;
                break;
            }
            first++;
        }


        first = 'a';
        char sec = 'a';

        for(int j=0; j<26 and !found; j++)
        {
            for(int i=0; i<26 and !found ; i++)
            {
                check = "";
                check+=first;
                check+=sec;
                //cout<<check<<" ";
                if(mp.find(check)==mp.end())
                {
                    ans=check;
                    found=true;
                    break;
                }
                sec++;
            }
            first++;
            sec='a';
        }

        first = 'a';
        sec = 'a';
        char third = 'a';

        for(int k=0; k<26 and !found; k++)
        {
            for(int j=0; j<26 and !found; j++)
            {
                for(int i=0; i<26 and !found ; i++)
                {
                    check = "";
                    check+=first;
                    check+=sec;
                    check+=third;
                    //cout<<check<<" ";
                    if(mp.find(check)==mp.end())
                    {
                        ans=check;
                        found=true;
                        break;
                    }
                    third++;
                }
                sec++;
                third='a';
            }
            first++;
            third='a';
            sec='a';
        }
        cout<<ans<<"\n";

    }
}
