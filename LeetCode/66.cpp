#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int>& digits)
    {
        int sz=digits.size();
        bool complete=false;

        if(digits[sz-1]!=9)
            digits[sz-1]+=1;
        else
        {
            for(int i=sz-1; i>=0; i--)
            {
                if(digits[i]==9)
                    digits[i]=0;
                else
                {
                    complete=true;
                    digits[i]+=1;
                    break;
                }
            }
            if(complete==false)
            {
                digits[0]=1;
                digits.push_back(0);
            }
        }

        for(auto x:digits)
            cout<<x<<" ";
        return digits;

    }
};

int main()
{
    Solution obj;
    vector<int>vec = {9,9,9};
    obj.plusOne(vec);
}
