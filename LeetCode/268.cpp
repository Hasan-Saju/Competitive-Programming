#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int siz=nums.size();
        int sum=0;

        for(auto x:nums)
            sum+=x;
        int total = (siz*(siz+1))/2;
        cout<<total-sum;
        return total-sum;

    }
};

int main()
{
    Solution obj;
    vector<int>vec = {3,0,1};
    obj.missingNumber(vec);
}





