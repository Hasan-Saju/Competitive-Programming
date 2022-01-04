#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> ans;
    vector<char> container[10];
    map<char,int>mp;



    void initialize()
    {
        mp['2']=2;
        mp['3']=3;
        mp['4']=4;
        mp['5']=5;
        mp['6']=6;
        mp['7']=7;
        mp['8']=8;
        mp['9']=9;

        char character = 'a';
        char ind = '2';
        for(int i=2; i<=9; i++)
        {
            //cout<<"i "<<i<<" ind "<<ind<<" charac "<<character<<"\n";
            container[i].push_back(character);
            //cout<<"1";
            container[i].push_back(character+1);
            //cout<<"2";
            container[i].push_back(character+2);
            //cout<<"ok\n";

            if(i==7 or i==9)
                container[i].push_back(character+3);

            if(i==7 or i==9)
                character += 4;
            else
                character += 3;

            ind++;
            //cout<<"done\n";

        }

    }



    vector<string> zeroCombo()
    {
        return ans;
    }

    vector<string> oneCombo(string inp)
    {
        //cout<<"one\n";
        for(auto x:container[mp[inp[0]]])
        {
            //cout<<"x "<<x<<"\n";
            auto temp=string(1,x);
            ans.push_back(temp);
            temp="";
        }
        return ans;
    }

    vector<string> twoCombo(string inp)
    {
        //cout<<"two\n";
        char t1=inp[0];
        char t2= inp[1];

        for(auto x: container[mp[t1]] )
        {
            //cout<<x<<"\n";
            for(auto y: container[mp[t2]] )
            {
                //cout<<x<<" "<<y<<"\n";
                auto temp=string(1,x)+y;
                //cout<<temp<<"\n";
                ans.push_back(temp);
                temp="";
                //cout<<temp;
            }

        }
        return ans;
    }

    vector<string> threeCombo(string inp)
    {
        for(auto x:container[mp[inp[0]]] )
        {
            for(auto y:container[mp[inp[1]]] )
            {
                for(auto z:container[mp[inp[2]]] )
                {
                    auto temp=string(1,x)+y+z;
                    ans.push_back(temp);
                    temp="";
                }
            }

        }
        return ans;
    }

    vector<string> fourCombo(string inp)
    {
        for(auto x:container[mp[inp[0]]] )
        {
            for(auto y:container[mp[inp[1]]] )
            {
                for(auto z:container[mp[inp[2]]] )
                {
                    for(auto w:container[mp[inp[3]]] )
                    {
                        auto temp = string(1,x)+y+z+w;
                        ans.push_back(temp);
                    }
                }
            }
        }
        return ans;
    }

    vector<string> letterCombinations(string digits)
    {
        //cout<<"in";
        initialize();
        //cout<<"out";
        vector<string>result ;

        if(digits.size()==0)
            result = zeroCombo();
        else if(digits.size()==1)
            result = oneCombo(digits);
        else if(digits.size()==2)
            result = twoCombo(digits);
        else if(digits.size()==3)
            result = threeCombo(digits);
        else if(digits.size()==4)
            result = fourCombo(digits);

        for (auto k:result)
            cout<<k<<"\n";

        return result;

    }
};

int main()
{
    Solution obj;
    obj.letterCombinations("9");
}
