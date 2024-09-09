#include<bits/stdc++.h>
using namespace std;

struct record
{
    string name;
    string age;
    string gender;
    string city;
    string score;
};

int main()
{
    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cerr << "Error opening the file!" << endl;
        return 1;
    }

    string line;
    vector<record>vr;

    while (getline(inputFile, line)) {

        stringstream s(line);
        string data;
        vector<string>row;

        while(s>>data)
        {
            //cout<<" w: "<<data<<"\n";
            row.push_back(data);
        }
        vr.push_back({row[0], row[1], row[2], row[3], row[4]});
    }

    inputFile.close();

    for(auto data: vr)
    {
        cout<<" -> "<<data.name<<" "<<data.age<<" "<<data.gender<<" "<<data.city<<" "<<data.score<<"\n" ;
    }

    return 0;
}
