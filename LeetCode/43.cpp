#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string multiply(string num1, string num2)
    {
        int num1s = num1.size();
        int num2s = num2.size();

        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        vector<int>res(num1s+num2s, 0);

        for(int i=0; i<num1s; i++ )
        {
            int n1 = num1[i]-'0';
            for(int j=0; j<num2s; j++ )
            {
                int n2 = num2[j]-'0';
                //cout<<n1<<" "<<n2<<"\n";
                int prod = n1*n2;
                int temp = res[i+j] + prod;
                res[i+j] = (temp % 10);
                res[i+j+1] += (temp/10);
            }
        }

        string ans= "";
        string result="";
        int ind=0;
        for(int x=0; x<res.size(); x++)
        {
            ans += res[x] + '0';
        }
        reverse(ans.begin(), ans.end());

        bool leadingZero=true;
         for (auto num : ans) {
            if (leadingZero && num == '0') continue; // Skip leading zeros
            leadingZero = false;
            result += num;
        }

        return result.empty() ? "0" : result;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.multiply("3", "2");
}

