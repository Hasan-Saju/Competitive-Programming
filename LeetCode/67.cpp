#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        int carry=0;
        string ans="";


        if(a.size()<b.size())
        {
            a.insert(0, (b.size()-a.size()), '0');
        }
        else if(a.size()>b.size())
        {
            b.insert(0, (a.size()-b.size()), '0');
        }

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
cout<<a<<" "<<b<<"\n";
        for(int i=0; i<a.size(); i++)
        {
            cout<<a[i]<<" "<<b[i]<<"\n";
            if(a[i]!=b[i] and !carry)
                ans+="1";
            else if(a[i]!=b[i] and carry)
                ans+="0";
            else if(a[i]==b[i] and a[i]=='0' and carry)
            {
                ans+="1";
                carry = 0;
            }
            else if(a[i]==b[i] and a[i]=='0' and !carry)
                ans+="0";
            else if(a[i]==b[i] and a[i]=='1' and !carry)
            {
                ans+="0";
                carry = 1;
                cout<<"here";
            }
            else if(a[i]==b[i] and a[i]=='1' and carry)
            {
                ans+="1";
                carry = 1;
            }
             cout<<ans<<"\n";
        }
        if(carry) ans+="1";

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>vec = {2,7,11,15};
    cout<<obj.addBinary("11", "1");
}


