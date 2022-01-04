#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>result(boxes.size()), left(boxes.size()), right(boxes.size());
        int kount=boxes[0]-'0';

        int n=boxes.size();

        for(int i=1;i<n;i++)
        {
           left[i] = left[i-1]+kount;
           kount += boxes[i]-'0';
        }

         kount=boxes[n-1]-'0';
        for(int i=n-2;i>=0;i--)
        {
           right[i] = right[i+1]+kount;
           kount += boxes[i]-'0';
        }

        for(int i=0;i<n;i++)
            result[i] = left[i]+right[i];

        for(auto x:result)
            cout<<x<<" ";
        return result;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.minOperations("110");
}

