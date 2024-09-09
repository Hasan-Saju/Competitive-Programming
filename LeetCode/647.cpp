#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
        int left, right;
        int kount = 0;

        for(int i=0; i<s.size(); i++)
        {
            left = i;
            right = i;
            while(left>=0 and right<s.size() and s[left] == s[right])
            {
                kount++;
                left--;
                right++;

            }

            left = i;
            right = i+1;
            while(left>=0 and right<s.size() and s[left] == s[right])
            {
                kount++;
                left--;
                right++;
            }

        }
        return kount;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.countSubstrings("abc");
}

