#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'processLogs' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY logs
 *  2. INTEGER threshold
 */

vector<string> processLogs(vector<string> logs, int threshold)
{
    vector<string> result;
    map<string, int>mapUserAndTransactionNumber;

    //First go through all the logs, split them and count the number of transactions for each user by following the instructions
    for(auto log:logs)
    {
        string s;
        stringstream ss(log);
        vector<string> splitVector;
        while (getline(ss, s, ' '))
            splitVector.push_back(s);

        if(splitVector[0]==splitVector[1])
            mapUserAndTransactionNumber[splitVector[0]]++;
        else
            mapUserAndTransactionNumber[splitVector[0]]++, mapUserAndTransactionNumber[splitVector[1]]++;
    }

    //Stored all the user who crossed or touched the threshold for suspicious activities
    for(auto eachUser:mapUserAndTransactionNumber)
    {
        if(eachUser.second>=threshold)
            result.push_back(eachUser.first);
    }

    //finally sorted the user ascending order
    sort(result.begin(), result.end(), [](const std::string &a, const std::string &b) {
        // First compare by length, beacuse 99 should come before 100
        if (a.size() != b.size())
            return a.size() < b.size();
        // If lengths are the same, compare lexicographically
        return a < b;
    });

    return result;
}

int main()
{
    vector<string>ques = {"100 99 200", "100 99 300" , "99 32 100", "12 12 15"};
    vector<string>ans = processLogs(ques, 2);
    for(auto x:ans)
        cout<<x<<" ";
}
