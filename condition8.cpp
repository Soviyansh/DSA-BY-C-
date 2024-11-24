// TO DIND THE QUADRANT

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter x and y coordinates: ";
    cin >> x >> y;

    if (x > 0 && y > 0)
        cout << "The point lies in the first quadrant." << endl;
    else if (x < 0 && y > 0)
        cout << "The point lies in the second quadrant." << endl;
    else if (x < 0 && y < 0)
        cout << "The point lies in the third quadrant." << endl;
    else if (x > 0 && y < 0)
        cout << "The point lies in the fourth quadrant." << endl;
    else if (x == 0 && y != 0)
        cout << "The point lies on the y-axis." << endl;
    else if (y == 0 && x != 0)
        cout << "The point lies on the x-axis." << endl;
    else
        cout << "The point is at the origin." << endl;

    return 0;
}
