#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool first = false;
        bool second = false;
        bool third = false;
        for(auto val:triplets)
        {
            if(val[0]>target[0] or val[1]>target[1] or val[2]>target[2])
                continue;

            if(val[0]==target[0])
                first = true;
            if(val[1]==target[1])
                second = true;
            if(val[2]==target[2])
                third = true;

        }
        //cout<<first<<" "<<second<<" "<<third<<endl;
        return (first && second) and (second && third) ? true:false;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec);
}

