#include<bits/stdc++.h>
using namespace std;
class Codec
{
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs)
    {
        vector<int>sz;
        for(auto s:strs)
        {
            sz.push_back(s.size());
        }

        string encoded="";
        for(auto n:sz)
        {
            encoded+=to_string(n);
            encoded+=',';
        }
        encoded.pop_back();
        encoded+='#';

        for(auto s:strs)
            encoded+=s;
        cout<<encoded<<endl;

        return encoded;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s)
    {
        vector<int>sz;
        vector<string>ans;
        int i=0;
        string val="";
        int endd = 0;

        while(s[i]!='#' and i<s.size() and !endd)
        {
            while(s[i]!=',' and i<s.size())
            {
                if(s[i]=='#')
                {
                    endd=1;
                    break;
                }
                val+=s[i];
                i++;
            }
            cout<<val<<" x"<<endl;
            sz.push_back(stoi(val));
            val="";
            i++;
        }


        for(auto x:sz)
        {
            if(x==0)
            {
                ans.push_back("");
                continue;
            }

            string temp = s.substr(i, x);
            ans.push_back(temp);
            i=i+x;
            cout<<temp<<" "<<x<<" "<<i<<endl;
        }

        return ans;
    }
};
int main()
{
    Codec obj;
    vector<string>vec = {"Hello", "World"};
    //obj.encode(vec);
    obj.decode(obj.encode(vec));
}
