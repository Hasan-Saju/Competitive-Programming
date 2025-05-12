#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        int cr=0, res=0;
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        for(int i=0; i<max(num1.size(), num2.size()); i++)
        {
            int f,s;

            f = num1[i]-'0';
            s = num2[i]-'0';

            if(i>=num1.size())
                f=0;
            if(i>=num2.size())
                s=0;


            int sm = sum(f,s,cr);

            res = res*10 + sm;
            cout<<res<<" ";
            cr = carry(f,s,cr);
        }

        string ans = to_string(res);
        reverse(ans.begin(), ans.end());

        return ans;
    }

    int sum(int f, int s, int c)
    {
        return (f+s+c)%10;
    }

    int carry(int f, int s, int c)
    {
        return (f+s+c)/10;
    }

};
int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.addStrings("456", "77");
}

