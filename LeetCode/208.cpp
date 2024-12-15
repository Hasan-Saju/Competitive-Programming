#include<bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    TrieNode* children[26];
    bool endOfWord;

    TrieNode()
    {
        for(int i=0; i<26; i++)
            children[i] = nullptr;
        endOfWord = false;
    }
};

class Trie
{
    TrieNode* root;
public:
    Trie()
    {
        root = new TrieNode();
    }

    void insert(string word)
    {
        TrieNode* curr = root;
        for(auto c:word)
        {
            int x = c-'a';
            if(curr->children[x]==nullptr)
                curr->children[x] = new TrieNode();
            curr = curr->children[x];
        }
        curr->endOfWord = true;
    }

    bool search(string word)
    {
        TrieNode* curr = root;
        for(auto c:word)
        {
            int x = c-'a';
            if(curr->children[x]==nullptr)
                return false;
            curr = curr->children[x];
        }
        return curr->endOfWord;
    }

    bool startsWith(string prefix)
    {
        TrieNode* curr = root;
        for(auto c:prefix)
        {
            int x = c-'a';
            if(curr->children[x]==nullptr)
                return false;
            curr = curr->children[x];
        }
        return true;
    }
};
int main()
{
    Trie obj;
    //obj.Trie();
    obj.insert("apple");
    cout<<obj.search("apple");
    cout<<obj.search("app");
    cout<<obj.startsWith("app");
}
