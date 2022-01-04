#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    string intToRoman(int num)
    {

        map<int, string>mp;
        mp[1]="I";
        mp[4]="IV";
        mp[5]="V";
        mp[9]="IX";
        mp[10]="X";
        mp[40]="XL";
        mp[50]="L";
        mp[90]="XC";
        mp[100]="C";
        mp[400]="CD";
        mp[500]="D";
        mp[900]="CM";
        mp[1000]="M";

        vector<int>vec = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string ans="";
        bool last=false;

        for(int i=0; i<vec.size(); i++)
        {
            //cout<<num<<"\n";

            int ins= num % vec[i];
            int div = num / vec[i];
            //cout<<div<<" "<<vec[i]<<"\n";

            if(last)
                num=0;


            if(div)
            {
                num = num%vec[i];
            }


            for(int j=0; j<div; j++)
            {

                ans += mp[vec[i]];
            }
            //cout<<ans<<"\n";

        }

        return ans;

    }
};

int main()
{
    Solution obj;
    int num=39;
    obj.intToRoman(num);
}


