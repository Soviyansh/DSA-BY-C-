//Character Type Identification


#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (isalpha(ch)) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            cout << "The character is a vowel." << endl;
        else
            cout << "The character is a consonant." << endl;
    } else if (isdigit(ch))
        cout << "The character is a digit." << endl;
    else
        cout << "The character is a special character." << endl;

    return 0;
}
