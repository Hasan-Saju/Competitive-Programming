#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string convert(string s, int numRows)
    {
        vector<vector<char>>result(numRows);
        vector<int>ind;
        int temp=numRows-2;
        for(int i=0; i<numRows; i++)
            ind.push_back(i);
        while(temp>0)
            ind.push_back(temp), temp--;

        temp=0;
        for(int i=0; i<s.size(); i++)
        {
            result[ind[temp]].push_back(s[i]);
            temp++;
            if(temp==ind.size())
                temp=0;
        }

        string r = "";
        for(auto vec:result)
            for(auto cha:vec)
                r+=cha;

        return r;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.convert("A", 1);
}

//0,1,2,3,2,1
