//
// Created by David Arsov on 22.10.26.
//


#include <iostream>

using namespace std;

// Да се напише програма што за внесен број на поени од испит ќе генерира
// соодветна оценка според следната табела:

int main() {

    int poeni;
    cin >> poeni;

    if (poeni >= 0 && poeni <= 50) {
        cout << 5;
    } else if (poeni >= 51 && poeni <= 60) {
        cout << 6;
    } else if (poeni >= 61 && poeni <= 70) {
        cout << 7;
    } else if (poeni >= 71 && poeni <= 80) {
        cout << 8;
    } else if (poeni >= 81 && poeni <= 90) {
        cout << 9;
    } else if (poeni >= 91 && poeni <= 100) {
        cout << 10;
    }

    if (poeni < 50) {
        cout << 5;
    } else if (poeni < 60) {
        cout << 6;
    }

    if (poeni >= 91) {
        cout << 10;
    } else if (poeni >= 81) {
        cout << 9;
    }
    return 0;
}