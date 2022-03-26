#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> result;
        int kount=k;

        for(int i=0;i<nums1.size();i++)
        {
            int j=0;
            if(i+1>=nums1.size())break;
            for(int j=0; nums2[j]<=nums1[i+1]; j++ )
            {
                vector<int>temp;
                temp.push_back(nums1[i]);
                temp.push_back(nums2[j]);
                cout<<nums1[i]<<" "<<nums2[j]<<"\n";
                result.push_back(temp);
                kount--;
                if(kount==0)
                    break;
            }
            if(kount==0)
                    break;
        }
        return result;
    }
};

int main()
{
    Solution obj;
    vector<int>vec1 = {1,2};
    vector<int>vec2 = {3};
    int k=3;
    obj.kSmallestPairs(vec1,vec2,k);
}

