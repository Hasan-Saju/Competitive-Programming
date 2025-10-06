#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int>& height)
    {
        int left = 0;
        int right = height.size()-1;
        int mxarea=INT_MIN;

        while(left<right)
        {
            mxarea = max(mxarea, (right-left)*min(height[right], height[left]));
            if(height[left]<=height[right])
                left++;
            else
                right--;
            cout<<left<<" "<<right<<" "<<mxarea<<endl;
        }
        return mxarea;
    }
};
int main()
{
    Solution obj;
    //vector<int>vec = {1,8,6,2,5,4,8,3,7};
    vector<int>vec = {8,7,2,1};
    cout<<obj.maxArea(vec);
}

//0 1 2 3 4 5 6 7 8

//8-1(index)(minHeight)

//8 7 2 1

//3 4 7
