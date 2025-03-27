#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x)
    {
        vector<int>ans;
        int left = 0;
        int right = 0;
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]==x)
            {
                ans.push_back(arr[i]);
                left = i-1;
                right = i+1;
                break;
            }
            if(arr[i]>x)
            {
                right = i;
                left = i-1;
                break;
            }

            left = i;
            right = i+1;
        }

        while(ans.size()<k)
        {
            int leftVal = left>=0 ? abs(x-arr[left]):INT_MAX;
            int rightVal = right<arr.size() ? abs(arr[right]-x):INT_MAX;

            if(left>=0 and leftVal<=rightVal)
            {
                ans.push_back(arr[left]);
                left--;
            }
            else if(right<arr.size())
            {
                ans.push_back(arr[right]);
                right++;
            }
        }

        sort(ans.begin(), ans.end());
        for(auto x: ans)
            cout<<x<<" ";
        return ans;

    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,1,2,3,4,5};
    obj.findClosestElements(vec,4,-1);
}
