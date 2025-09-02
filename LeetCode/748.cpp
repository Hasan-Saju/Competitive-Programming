#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        string temp = "";
        for(auto c: licensePlate)
        {
            if(isalpha(c))
                temp += c;
        }
        sort(temp.begin(), temp.end());
        for(auto x: words)
        {
            sort(x.begin(), x.end());

        }
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec);
}

