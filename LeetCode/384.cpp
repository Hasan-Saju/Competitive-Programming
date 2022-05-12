#include<bits/stdc++.h>
using namespace std;

class Solution {
    vector<int>res,shuf;

public:
    Solution(vector<int>& nums) {
        res=nums;
        shuf=nums;
    }

    vector<int> reset() {
        return res;

    }

    vector<int> shuffle() {
        random_shuffle(shuf.begin(),shuf.end());
        return shuf;
    }
};


int main()
{
    Solution obj;
    //vector<int>vec = {2,7,11,15};
    //cout<<obj.uniquePaths(3, 7);
}



