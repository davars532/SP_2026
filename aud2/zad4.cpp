//
// Created by David Arsov on 22.10.26.
//

#include <iostream>

// Да се промени претходната програма, така што покрај оценките
// ќе се испечатат и знаците + и – во зависност од вредноста на
// последната цифра на поените:

// 93
// 10-

using namespace std;

int main() {
    int poeni;
    int ocenka;
    cin >> poeni;

    if (poeni >= 0 && poeni <= 50) {
        ocenka = 5;
        cout << 5;
    } else if (poeni >= 51 && poeni <= 60) {
        ocenka = 6;
        cout << 6;
    } else if (poeni >= 61 && poeni <= 70) {
        ocenka = 7;
        cout << 7;
    } else if (poeni >= 71 && poeni <= 80) {
        ocenka = 8;
        cout << 8;
    } else if (poeni >= 81 && poeni <= 90) {
        ocenka = 9;
        cout << 9;
    } else if (poeni >= 91 && poeni <= 100) {
        ocenka = 10;
        cout << 10;
    }

    // За оценката 5 не треба да се додава + или –, а за
    // оценката 10 не треба да се додава знакот +.

    int lastDigit = poeni % 10;

    if (ocenka !=5 && lastDigit >= 1 && lastDigit <= 3) {
        cout << "-";
    } else if (lastDigit >= 4 && lastDigit <= 7) {
        cout << " ";
    } else if (ocenka != 5 && ocenka != 10 && lastDigit >= 8 && lastDigit <= 9) {
        cout << "+";
    }
    return 0;
}