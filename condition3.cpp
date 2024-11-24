//MAX OF TWO NUMBERS

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b)
        cout << "The greater number is: " << a << endl;
    else if (b > a)
        cout << "The greater number is: " << b << endl;
    else
        cout << "Both numbers are equal." << endl;

    return 0;
}
