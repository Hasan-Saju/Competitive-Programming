#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {

        int siz = s.size();

        int i=0, j=siz-1;

        for(;i<j;i++,j--)
        {
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }

        for(auto x:s)
            cout<<x;

    }
};

int main()
{
    Solution obj;
    vector<char>vec = {'h','e','l','l','o'};
    obj.reverseString(vec);
}


