#include <bits/stdc++.h>
using namespace std;

int trie[100005][15];
int endd[100005];
int visited[100005];
vector<int> v;
int id = 0;

void build_trie(string s)
{
    int root = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int ch = s[i] - '0';
        if (trie[root][ch] == 0)
            trie[root][ch] = ++id;

        root = trie[root][ch];

        visited[root]++;
    }
    endd[root]++;
    v.push_back(root);
}

bool check(int i)
{
    if (visited[i] > 1)
        return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, flag = 1, p, n;
    bool ans;
    cin >> t;
    for (p = 1; p <= t; p++)
    {
        cin >> n;
        flag = 1;

        while (n--)
        {
            string x;
            cin >> x;
            build_trie(x);
        }

        for (int i = 0; i < v.size(); i++)
        {
            if (check(v[i]))
            {
                flag = 0;
            }
        }

        cout << "Case " << p << ": ";
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        memset(endd, 0, sizeof(endd));
        memset(visited, 0, sizeof(visited));
        memset(trie, 0, sizeof(trie));
        v.clear();
        id = 0;
    }
}
