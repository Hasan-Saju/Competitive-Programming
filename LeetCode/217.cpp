#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>s;
        for(auto x:nums )
        {
            s.insert(x);
        }
        if(s.size()==nums.size())
            return false;
        else return true;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,1,1,3,3,4,3,2,4,2};
    obj.containsDuplicate(vec);
}


