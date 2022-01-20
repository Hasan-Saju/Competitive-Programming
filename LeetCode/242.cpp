#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s==t)
            return true;
        else
            return false;
    }
};

int main()
{
    Solution obj;
    vector<char>vec = {'h','e','l','o'};
    obj.isAnagram("abc","cba");
}



