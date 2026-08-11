#include<bits/stdc++.h>
using namespace std;
class Codec
{
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs)
    {
        string enc="";
        for(auto x:strs)
        {
            string current = "";
            for(int i=0; i<x.size(); i++)
            {
                if(x[i]=='/')
                    current += '/';

                current += x[i];
            }
            enc+= current;
            enc+="/:";
            current = "";
        }

        cout<<enc<<endl;
        return enc;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s)
    {
        vector<string>ans;
        int i=0;
        string current = "";

        while(i<s.size()-1)
        {

            if(s[i]=='/' and s[i+1]=='/')
            {
                current+='/';
                i++;
            }
            else if(s[i]=='/' and s[i+1]==':')
            {
                ans.push_back(current);
                current="";
                i++;
            }
            else
                current+=s[i];

            i++;
        }

        return ans;
    }
};
int main()
{
    //Solution obj;
    vector<string>vec = {"Hello", "World"};
    Codec encoder;
    string msg = encoder.encode(vec);
}

