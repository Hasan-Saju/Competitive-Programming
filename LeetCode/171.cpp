

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for(int i=0; i<columnTitle.size(); i++)
        {
            int d = columnTitle[i]-'A'+1;
            result = result*26 + d;
        }
        return result;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    obj.twoSum(vec);
}
