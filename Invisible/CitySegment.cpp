#include<bits/stdc++.h>
using namespace std;

map<char, bool> stringMap(string in)
{

    map<char, bool>mp;
    for(char s: in)
    {
        if(s!=' ')
            mp[s]=true;
    }

    return mp;
}

int main()
{

    string s1="A B C D E F G", s2="H B C J K E F L G M";
    map<char, bool> mp = stringMap(s1);

    string tempAns;
    vector<string>ans;

    for(int i=0; i<s2.size(); i++)
    {
        if(s2[i]==' ')continue;
        tempAns+=s2[i];
        if(mp[s2[i]])
        {
            ans.push_back(tempAns);
            tempAns=s2[i];
        }

    }

    ans.push_back(tempAns);



    for(auto x: ans)
    {
        if( !(x.size()==2 and mp[x[0]] and mp[x[1]]) )
            cout<<x<<"\n";
    }


}
