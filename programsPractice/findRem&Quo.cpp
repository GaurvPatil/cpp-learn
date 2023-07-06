// find the quotent nd reminder of 2 numbers
// 9/2 = 9 devidend , 2 devisor , 4 quotient , 1 remainder

#include <iostream>
using namespace std;

int main()
{
    int devidend, devisor, quotient, remainder;

    cout << "enter devidend : ";
    cin >> devidend;

    cout << "enter devisor : ";
    cin >> devisor;

    quotient = devidend / devisor;
    remainder = devidend % devisor;

    cout << "quotient = " << quotient;
    cout << "\nremainder = " << remainder;

    return 0;
}
