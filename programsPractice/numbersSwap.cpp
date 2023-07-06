// swapping two numbers without using third varibale

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter Number A : ";
    cin >> a;

    cout << "Enter Number B : ";
    cin >> b;

    // numbers before swape

    cout << "numbers before swap";
    cout << "Number A : " << a << " "
         << "Number B : " << b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nNumber after swapping";
    cout << "Number A : " << a << " "
         << "Number B : " << b <<  "\n";





// second method using swap function 
short l, m;
cout << "\nsecond method The Values before Swap\n";
cout << "Please enter the value of l\n";
cin >> l;
cout << "Please enter the value of m\n";
cin >> m;
cout << "The Values After the Swap\n";
swap(l,m);
cout << "l = " << l << endl;
cout << "m = " << m << endl;


    return 0;
}