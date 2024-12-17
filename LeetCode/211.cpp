#include<bits/stdc++.h>
using namespace std;

class TrieNode{
public:
    TrieNode* children[26];
    bool word;

    TrieNode(){
        word = false;
        memset(children, NULL, sizeof(children));
    }
};
class WordDictionary {
public:
    TrieNode* root;
    WordDictionary() {
        root = new TrieNode();
    }

    void addWord(string word) {
        TrieNode* current = root;
        for(auto c:word)
        {
            int ind = c - 'a';
            if(current->children[ind]==nullptr)
                current->children[ind] = new TrieNode();
            current = current->children[ind];
        }
        current->word = true;
    }

    bool search(string word) {
        return searchHelper(word, 0, root);
    }
private:
    bool searchHelper(string& word, int pos, TrieNode* node)
    {
        TrieNode* current = node;
        for(int i=pos; i<word.size(); i++)
        {
            char c = word[i];
            if(c=='.')
            {
                for(TrieNode* child: current->children)
                    if(child!=nullptr && searchHelper(word, i+1, child))
                        return true;
                return false;
            }
            else{
                int ind = word[i]-'a';
                if(current->children[ind]==nullptr)
                    return false;
                current = current->children[ind];
            }
        }

        return current->word;
    }
};
int main()
{
    WordDictionary wordDictionary;
    //vector<int>vec = {2,7,11,15};
    wordDictionary.addWord("bad");
wordDictionary.addWord("dad");
wordDictionary.addWord("mad");
cout<<wordDictionary.search("pad"); // return False
cout<<wordDictionary.search("bad"); // return True
cout<<wordDictionary.search(".ad"); // return True
cout<<wordDictionary.search("b.."); // return True
}
