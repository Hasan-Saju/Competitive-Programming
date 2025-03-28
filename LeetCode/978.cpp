#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxTurbulenceSize(vector<int>& arr)
    {
        vector<int>small(arr.size(), 0);
        vector<int>large(arr.size(), 0);

        for(int i=0; i<arr.size(); i=i+2)
        {
            if(i+1<arr.size() and arr[i]>arr[i+1])
                large[i]=1;
            if(i+2<arr.size() and arr[i+1]<arr[i+2])
                large[i+1]=1;

            if(i+1<arr.size() and arr[i]<arr[i+1])
                small[i]=1;
            if(i+2<arr.size() and arr[i+1]>arr[i+2])
                small[i+1]=1;
        }

        int largeMax=0, smallMax=0;
        int tempLarge = 0, tempSmall=0;
        for(int i=0; i<large.size(); i++)
        {
            if(large[i]==0)
                tempLarge = 0;
            if(small[i]==0)
                tempSmall=0;

            if(large[i])
                tempLarge+=1;
            if(small[i])
                tempSmall+=1;

            largeMax = max(largeMax, tempLarge);
            smallMax = max(smallMax, tempSmall);
        }

        return 1 + max(largeMax, smallMax);
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {1,2,3};
    cout<<obj.maxTurbulenceSize(vec);
}

