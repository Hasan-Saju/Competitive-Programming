#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSwaps(string s) {
        stack<char>st;

        for(auto c:s)
        {
            if(c=='[')
                st.push(c);
            else if(!st.empty())
                st.pop();
        }
        return (st.size()+1)/2;
    }
};


int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.minSwaps("][][");
}

