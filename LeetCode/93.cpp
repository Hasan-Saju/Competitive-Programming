#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long stoic(string s)
    {
        long long x=0;
        for(int i=0; i<s.size(); i++)
        {
            x+=(s[i]-'0');
            x*=10;
        }

        //cout<<s<<" "<<x<<endl;
        return x/10;
    }
    bool check(string s1, string s2, string s3, string s4)
    {
        if( (s1[0]=='0' and s1.size()>1) or  (s2[0]=='0' and s2.size()>1) or (s3[0]=='0' and s3.size()>1) or (s4[0]=='0' and s4.size()>1))
            return false;

        if( (stoic(s1)>255 or stoic(s1)<0)  or (stoic(s2)>255 or stoic(s2)<0) or (stoic(s3)>255 or stoic(s3)<0) or (stoic(s4)>255 or stoic(s4)<0))
            return false;

        return true;
    }

    vector<string> restoreIpAddresses(string s)
    {
        vector<string>ans;

        for(int i=1; i<s.size(); i++)
        {
            for(int j=i+1; j<s.size(); j++)
            {
                for(int k=j+1; k<s.size(); k++)
                {
                    string p1, p2, p3, p4;
                    p1=s.substr(0, i-0);
                    p2=s.substr(i, j-i);
                    p3=s.substr(j, k-j);
                    p4=s.substr(k);

                    cout<<p1<<" "<<p2<<" "<<p3<<" "<<p4<<endl;
                    if(check(p1, p2, p3, p4))
                    {
                        string temp;
                        temp = p1+".";
                        temp+=p2;
                        temp+=".";
                        temp+=p3;
                        temp+=".";
                        temp+=p4;
                        cout<<"out\n";
                        ans.push_back(temp);
                    }
                }
            }
        }
        return ans;
    }
};
int main()
{
    Solution obj;
    //vector<int>vec = {2,7,11,15};
    obj.restoreIpAddresses("25525511135");
}
