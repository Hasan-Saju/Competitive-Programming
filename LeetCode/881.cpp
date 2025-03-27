#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int ans=0;
        int left = 0;
        int right = people.size()-1;

        while(left<right)
        {
            int temp = people[left]+people[right];
            if(temp<=limit)
            {
                ans++;
                left++;
                right--;
            }
            else{
                ans++;
                right--;
            }
        }
        if(left<=right)
            ans++;

        return ans;
    }
};
int main()
{
    Solution obj;
    vector<int>vec = {3,2,2,1};
    cout<<obj.numRescueBoats(vec, 3);
}
