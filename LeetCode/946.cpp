#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped)
    {
        stack<int>st;
        int i=0, j=0;
        for(i=0; i<pushed.size(); i++)
        {
            st.push(pushed[i]);
            while(!st.empty() and st.top()==popped[j])
            {
                st.pop();
                j++;
            }
        }

        if(st.empty() and i==pushed.size() and j==popped.size())
            return true;
        else return false;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {1,2,3,4,5};
    vector<int>vec2 = {4,3, 5,1,2};
    cout<<obj.validateStackSequences(vec, vec2);
}
