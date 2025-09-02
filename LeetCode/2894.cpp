#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int div = 0, ndiv=0;
        for(int i=1; i<=n; i++)
        {
            if(i%m)
                ndiv += i;
            else
                div += i;
        }
        return ndiv-div;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.differenceOfSums(5,6);
}
