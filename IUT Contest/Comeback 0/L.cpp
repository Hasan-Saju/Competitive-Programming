#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, ans, maxx = 1000000;
    string s, s1, s2, s3;
    cin >> n;
    cin >> s;

    for(int i = 0; i < s.size(); ++i)
    {

        s1 = s[i];
        s1 += s[i + 1];
        for(int j = 0; j < s.size(); ++j)
        {

            s2 = s[j];
            s2 += s[j + 1];

            if(s1 == s2)
            {

                ans++;
            }
        }

        if(maxx < ans)
        {

            maxx = ans;
            s3 = s1;
        }

        ans = 0;
    }

    cout << s3 << endl;

    return 0;
}
