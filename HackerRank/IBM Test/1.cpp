
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


/*
 * Complete the 'performOperations' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY arr
 *  2. 2D_INTEGER_ARRAY operations
 */

vector<int> performOperations(vector<int> arr, vector<vector<int>> operations)
{
    //take each of the operation, then find their left and right index.
    //reversed that part of the vector
    for(auto eachOperation:operations)
    {
        int leftIndex = eachOperation[0];
        int rightIndex = eachOperation[1];

        //reverse function reverse from the first element to the one element before the right side thus added one in right side
        reverse(arr.begin()+leftIndex, arr.begin()+rightIndex+1);
    }
    return arr;
}

int main()
{
    vector<int> arr = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    vector<vector<int>> operations = {{0, 9}, {4, 5}, {3, 6}, {2, 7}, {1, 8}, {0, 9}};

    vector<int> ans = performOperations(arr, operations);
    for(auto x:ans)
        cout<<x<<" ";
}
