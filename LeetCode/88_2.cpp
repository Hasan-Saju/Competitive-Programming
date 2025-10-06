#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;         // last valid in nums1
        int j = n - 1;         // last in nums2
        int k = m + n - 1;     // write pointer at end of nums1

        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,2,3,0,0,0};
    vector<int>vec2 = {2,5,6};
    obj.mergee(vec, 3, vec2, 3);
}

