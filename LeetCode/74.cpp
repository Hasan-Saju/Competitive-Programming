#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int binary_searchh(vector<int>& num, int target)
    {
        int l = 0;
        int r = num.size()-1;

        while(l<=r)
        {
            int mid = ((r-l)/2) + l;
            if(num[mid]==target)
                return mid;

            else if(target>num[mid])
                l = mid + 1;
            else
                r = mid -1;
        }
        return -1;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        vector<int>input;

        for(auto x:matrix)
        {
            for(auto y:x )
            {
                input.push_back(y);
            }
        }

        int ind = binary_searchh(input, target);

        if(ind ==- 1)
            return false;
        else
            return true;

    }
};

int main()
{
    Solution obj;
    vector<vector<int>>vec {{1, 2, 3},
        {3, 4, 6},
        {8, 9, 10}};

    cout<<obj.searchMatrix(vec, 6);
}

