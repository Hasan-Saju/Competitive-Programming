#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    size_t found;
    cin>>s;

    while(1)
    {
        found=s.find("WUB");
        //cout<<s<<" "<<found<<endl;
        if(found==string::npos)break;
        s.replace(found,3," ");
    }

        istringstream iss(s);
        string word;
        while(iss>>word)
        {
            cout<<word<<" ";
        }
}
