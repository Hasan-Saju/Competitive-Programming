#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target)
    {
        int f=0, s=0, l=0;
        for(auto vec: triplets)
        {
            if(vec[0]>target[0] or vec[1]>target[1] or vec[2]>target[2])
                continue;
            if(vec[0] == target[0])
                f=1;
            if(vec[1] == target[1])
                s=1;
            if(vec[2] == target[2])
                l=1;

            cout<<f<<" "<<s<<" "<<l<<"\n";
        }

        return f&&s&&l ? true:false;
    }
};

int main()
{
    Solution obj;
    vector<vector<int> >v = {{3,4,5},
        {4,5,6},


    };
    vector<int>target = {3,2,5};
    cout<<obj.mergeTriplets(v, target);
}
