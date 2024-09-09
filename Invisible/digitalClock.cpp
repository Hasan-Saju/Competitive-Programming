#include<bits/stdc++.h>
using namespace std;


void incrementMinutesBy(int currentMinutes, int currentHours, int minutesToIncrease)
{
    int finalMinutes  = (currentMinutes + minutesToIncrease) % 60;
    int finalHours = (currentHours + ((currentMinutes + minutesToIncrease) / 60))%24;

    cout<<finalHours<< ": "<<finalMinutes<<"\n";
}

int main()
{
    incrementMinutesBy(50, 11, 15);
}
