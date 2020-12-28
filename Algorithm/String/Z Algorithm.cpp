#include<bits/stdc++.h>
using namespace std;

string str;
int z[200005];

void calc_z()
{
    int L = 0;
    int R = 0;
    int i = 0;
    z[0] = 0;

    for(int i=1;i<str.size();i++)
    {
        if(i>R)
        {
            L = i;
            R = i;
            //int in = 0;
            while(str[R] == str[R-L] && R<str.size()) R++,in++;
            z[i] = R - L;
            R--;
        }
        else
        {
            int k = i - L;
            if(z[k]< R - i + 1) z[i] = z[k];
            else
            {
                L = i;
                //int in = 0;
                while(str[R]==str[R-L] && R<str.size())R++,in++;
                z[i] = R - L;
                R--;
            }
        }
    }
}
int main()
{
    string pat,text;
    cin>>pat>>text;

    str = pat + "$" + text;
    calc_z();
    for(int i=0;i<str.size();i++)cout<<z[i]<<" ";
    ///pat size value pailei bingo means matching
}
