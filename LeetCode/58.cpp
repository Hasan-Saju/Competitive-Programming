#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        for(int i =s.size()-1; i>=0; i-- )
        {
            if(tolower(s[i])>= 'a' and tolower(s[i])<= 'z')
                ans++;
            else if(ans>0 and !(tolower(s[i])>= 'a' and tolower(s[i])<= 'z'))
                break;
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    string  s = "   fly me   to   the moon  ";
    cout<<obj.lengthOfLastWord(s);
}

