//
// Created by David Arsov on 15.10.26.
//

#include <iostream>

using namespace std;

// Да се напише програма која ќе ги отпечати на екран остатоците
// при делењето на бројот 19 со 2, 3, 5 и 8.


int main() {

    int x = 19;
    int a = 3, b = 5, c = 8;

    cout << x % a << endl;
    cout << x % b << endl;
    cout << x % c << endl;

    cout << "19 % 2 = " << 19 % 2 << endl;
    cout << "19 % 3 = " << 19 % 3 << endl;
    cout << "19 % 5 = " << 19 % 5 << endl;
    cout << "19 % 8 = " << 19 % 8 << endl;
    return 0;
}