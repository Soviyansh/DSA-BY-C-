// ELIGIBILTY FOR VOTING.

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 60)
        cout << "You are a senior citizen and eligible to vote." << endl;
    else if (age >= 18)
        cout << "You are eligible to vote." << endl;
    else
        cout << "You are not eligible to vote." << endl;

    return 0;
}
