#include <iostream>
using namespace std;

int main() {
    bool x = true;
    bool y = false;

    // Logical AND
    cout << "x && y = " << (x && y) << endl;

    // Logical OR
    cout << "x || y = " << (x || y) << endl;

    // Logical NOT
    cout << "!x = " << (!x) << endl;
    cout << "!y = " << (!y) << endl;

    return 0;
}