#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    vector<string>store;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        store.push_back(longUrl);
        string tinyUrl = "http://tinyurl.com/";
        return tinyUrl+to_string(store.size()-1);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int index = stoi(shortUrl.substr(shortUrl.find_last_of('/') + 1));
        return store[index];
    }
};
int main()
{
    Solution obj;
    //vector<int>vec = {2,7,11,15};
    cout<<obj.encode("https://leetcode.com/problems/design-tinyurl");
    cout<<obj.decode(obj.encode("https://leetcode.com/problems/design-tinyurl"));
}
