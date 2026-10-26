//
// Created by David Arsov on 15.10.26.
//


#include <iostream>

using namespace std;

// Да се напише програма која чита голема буква од стандарден влез
// и ја печати истата како мала буква.
// - Напомена: Секој знак се претставува со ASCII број.

int main() {

    char c;
    cin >> c;

    cout << char(c + 32) << endl;
    cout << char(c + ('a' - 'A')) << endl;
    cout << 'a' - 'A' << endl;
    return 0;
}