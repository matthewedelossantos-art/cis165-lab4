
#include <iostream>
using namespace std;

int main() {
    const double ANNUAL_RATE = 1.5;
    const int FIVE_YEARS = 5;
    const int SEVEN_YEARS = 7;
    const int TEN_YEARS = 10;

    double increase_five_years = ANNUAL_RATE * FIVE_YEARS;
    double increase_seven_years = ANNUAL_RATE * SEVEN_YEARS;
    double increase_ten_years = ANNUAL_RATE * TEN_YEARS;

    cout << "Ocean-level increase after " << FIVE_YEARS << " years: "
         << increase_five_years << " mm" << endl;
    cout << "Ocean-level increase after " << SEVEN_YEARS << " years: "
         << increase_seven_years << " mm" << endl;
    cout << "Ocean-level increase after " << TEN_YEARS << " years: "
         << increase_ten_years << " mm" << endl;

    return 0;
}
