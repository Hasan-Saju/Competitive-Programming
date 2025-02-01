#include<bits/stdc++.h>
using namespace std;

int main() {

    double account_value = 10000.0;
    double monthly_interest_rate = 0.005;
    double monthly_withdrawal = 500.0;
    int months = 0;

    while (account_value > 0) {
        account_value *= (1 + monthly_interest_rate);
        account_value -= monthly_withdrawal;
        months++;
    }


    int years = months / 12;
    int remaining_months = months % 12;

    float floatYear = (float)months/12;

    cout << "The account is depleted after " << years << " years and " << remaining_months << " months." << endl;
    cout << "(Total months: " << months << ")" << endl;
    cout<<floatYear;

    return 0;
}
