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

int t,p;
    cin>>t;
    for(p=0;p<t;p++)
    {
        cout<<"Case "<<p+1<<":"<<endl;
        int sizee,ins,i,tempNum;
        string temp;
        list<int>l;
        cin>>sizee>>ins;
        for(i=0;i<ins;i++)
        {
            cin>>temp;
            if(temp=="pushLeft"||temp=="pushRight")
            {
                cin>>tempNum;
                if(l.size()==sizee)cout<<"The queue is full"<<endl;
                else{
                    if(temp=="pushLeft")
                    {
                        cout<<"Pushed in left: "<<tempNum<<endl;
                        l.push_front(tempNum);
                    }
                    else if(temp=="pushRight")
                    {
                        cout<<"Pushed in right: "<<tempNum<<endl;
                        l.push_back(tempNum);
                    }
                }
            }
            else if(temp=="popLeft"||temp=="popRight")
            {
                if(l.size()==0)cout<<"The queue is empty"<<endl;
                else{
                    if(temp=="popLeft")
                    {
                        cout<<"Popped from left: "<<l.front()<<endl;
                        l.pop_front();
                    }
                    else if(temp=="popRight")
                    {
                        cout<<"Popped from right: "<<l.back()<<endl;
                        l.pop_back();
                    }
                }
            }
        }


    }
}

