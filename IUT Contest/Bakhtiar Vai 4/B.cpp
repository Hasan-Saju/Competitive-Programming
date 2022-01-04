#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define vi vector<int>
#define si set<int>
#define FOR(i,n) for(int i=0;i<n;i++)
int main()
{
    string temp,word,x,agains;
    vector<string> wordStore;
    map<string,int>m;
    map<string,int>::iterator it;
   map<string,string> duiSt;
   set<string>sett;
   set<string>::iterator its;
    int i;


    while(getline(cin,temp)&&(temp[0]!='#'))
    {

        stringstream ss(temp);
        while(ss>>word)
        {
            wordStore.pb(word);
           // cout<<word<<endl;
        }
    }
    for(i=0;i<wordStore.size();i++)
    {
       x= wordStore[i];

       transform(wordStore[i].begin(),wordStore[i].end(),wordStore[i].begin(),::tolower);
        vector<char> wordchar(wordStore[i].begin(),wordStore[i].end());
        sort(wordchar.begin(),wordchar.end());
        string agains(wordchar.begin(),wordchar.end());
        duiSt[agains]=x;
        m[agains]+=1;
       // cout<<wordStore[i]<<" "<<agains<<endl;


    }
    for(it=m.begin();it!=m.end();it++)
    {
       // cout<<it->first<<" "<<it->second<<endl;;
        if(it->second==1)
        {
            sett.insert(duiSt[it->first]);
        }
    }
    for(its=sett.begin();its!=sett.end();its++)
    {
        cout<<*its<<endl;
    }

}

