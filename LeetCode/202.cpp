#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int squareOfNumbers(int x)
    {
        int res = 0;
        while(x)
        {
            int mod = x%10;
            res += (mod*mod);
            x/=10;
        }
        return res;
    }
    bool isHappy(int n)
    {
        set<int>s;
        bool happy = false;

        int temp = n;
        while(s.find(temp)==s.end())
        {
            //cout<<temp<<"\n";
            s.insert(temp);
            temp = squareOfNumbers(temp);

            if(temp==1)
            {
                happy = true;
                break;
            }
        }

        return happy;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.isHappy(19);
}

