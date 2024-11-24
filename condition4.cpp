// TO FIND THE TYPE OF TRIANGLE 

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides of a triangle: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
        cout << "The triangle is equilateral." << endl;
    else if (a == b || b == c || a == c)
        cout << "The triangle is isosceles." << endl;
    else
        cout << "The triangle is scalene." << endl;

    return 0;
}
