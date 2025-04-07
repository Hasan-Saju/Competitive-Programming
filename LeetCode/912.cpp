#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> sortArray(vector<int>& nums)
    {
        heapSort(nums);
        return nums;
    }
private:
    void heapify(vector<int>& nums, int n, int i)
    {
        int left = (2*i)+1;
        int right = (2*i)+2;
        int largest = i;

        if(left<n and nums[left]>nums[largest])
            largest = left;
        if(right<n and nums[right]>nums[largest])
            largest=right;

        if(largest!=i)
        {
            swap(nums[largest], nums[i]);
            heapify(nums, n, largest);
        }
    }
    void heapSort(vector<int>& nums)
    {
        int n = nums.size();
        for(int i=n/2-1; i>=0; i--)
            heapify(nums,n,i);

        for(int i=n-1; i>0; i--)
        {
            swap(nums[0], nums[i]);
            heapify(nums, i, 0);
        }
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {77,8,88,2,7,11,15};
    vector<int>ans = obj.sortArray(vec);

    for(auto x:ans)
        cout<<x<<" ";
}

