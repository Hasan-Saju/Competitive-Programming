#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countSeniors(vector<string>& details)
    {
        int res=0;
        for(auto p:details)
        {
            string age="";
            age+= p[11];
            age+= p[12];
            if(stoi(age)>60)
                res++;
        }
        return res;
    }
};
int main()
{
    Solution obj;
    vector<string>details = {"7868190130M7522","5303914400F9211","9273338290F4010"};
    cout<<obj.countSeniors(details);
}

