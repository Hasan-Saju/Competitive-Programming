#include<bits/stdc++.h>
using namespace std;

int solution(int N)
{
    // write your code in C++14 (g++ 6.2.0)
    string str = std::bitset<64>(N).to_string();
    //cout<<str;
    int first=-1, last=-1;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='1')
        {
            first=i;
            break;
        }
    }
    for(int i=str.size()-1; i>=0; i--)
    {
        if(str[i]=='1')
        {
            last=i;
            break;
        }
    }
    //cout<<"\n"<<first<<" "<<last<<"\n";

    int result=0;
    if((last-first)<=1)
    {
        return result;
    }
    else{
        int cur=0;
        for(int i=first;i<=last;i++)
        {
            //cout<<"in\n";
            if(str[i]=='0')
            {
                cur++;
            }
            else
            {
                result=max(result,cur);
                cur=0;
            }
        }
    }
    return result;
}


int main()
{

    cout<<"\n"<<solution(647);
}





