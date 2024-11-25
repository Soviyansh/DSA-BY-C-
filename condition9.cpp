// TO FINF THE ELECTRICITY BILL 

#include <iostream>
using namespace std;

int main() {
    int units;
    cout << "Enter electricity units consumed: ";
    cin >> units;

    int bill;
    if (units <= 100)
        bill = units * 5;
    else if (units <= 300)
        bill = 100 * 5 + (units - 100) * 10;
    else
        bill = 100 * 5 + 200 * 10 + (units - 300) * 15;

    cout << "Your electricity bill is: "<< bill << endl;
    return 0;
}
