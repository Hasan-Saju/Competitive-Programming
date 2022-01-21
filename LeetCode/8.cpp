#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        bool pos=true;
        bool yesNum=false;
        bool yesChar=false;
        int sign=0;
        long long number=0;
        for(auto ch:s )
        {
            if(ch=='-')
            {
                sign++;
                if(sign>=2 or yesNum)
                    break;
                pos=false;
                yesChar=true;
            }
            if(ch=='+')
            {
                sign++;
                if(sign>=2 or yesNum)
                    break;
                yesChar=true;
            }
            if(isalpha(ch) or ch=='.' or (yesNum and !isdigit(ch)) or (ch==' ' and yesChar))
                break;
            if(isdigit(ch))
            {
                yesNum=true;
                number=(number*10)+ch-'0';
                if(!pos and -1*number<=-2147483648)
                {
                    number=2147483648;
                    break;
                }
                if(number>=2147483647)
                {
                    number=2147483647;
                    break;
                }
            }
            //cout<<number<<"\n";
        }
        if(!pos)
            number*=-1;
        cout<<number;
        return number;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    string s=" - 123";
    obj.myAtoi(s);
}


