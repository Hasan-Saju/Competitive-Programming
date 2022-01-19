#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero=0;
        for(auto it=nums.begin(); it!=nums.end();it++)
        {
            //cout<<*it<<"\n";
            //cout<<&(*it)<<"\n";
            if(*it==0)
            {
                nums.erase(it);
                zero++;
                it--;
            }
        }

        for(int i=0;i<zero;i++)
            nums.push_back(0);

//        for(auto x:nums)
//            cout<<x<<" ";

    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,0,0,0,3,12};
    obj.moveZeroes(vec);
}


