//
// Created by David Arsov on 22.10.26.
//

#include <iostream>

using namespace std;

// Да се напише програма која чита знак од тастатура и во зависнот
// од тоа дали е мала или голема буква печати 1 или 0, соодветно.

int main() {
    char c;

    cin >> c;

    if (c >= 'a' && c <= 'z') {
        cout << 1;
    } else if (c >= 'A' && c <= 'Z') {
        cout << 0;
    } else if (c >= '0' && c <= '9') {
        cout << 2;
    }

    int mala = c >= 'a' && c <= 'z';

    cout << endl << mala << endl;

}