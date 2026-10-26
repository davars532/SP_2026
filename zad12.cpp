//
// Created by David Arsov on 22.10.26.
//

#include <iostream>

using namespace std;

// Да се напише програма каде од тастатура ќе се внесе датумот на раѓање
// во формат (ddmmgggg). Програмата на компјутерскиот екран ќе го
// испечати денот и месецот на раѓање.

// Пример: Ако се внесе следниот број: 18091992, програмата ќе испечати: 18.9
// ПОМОШ: Искористете целобројно делење и остаток од делење.


int main() {

    int date;
    cin >> date;

    int birthYear = date % 10000;
    int birthMonth = date / 10000 % 100;

    cout << "Godina na raganje: " << birthYear << endl
    << "Mesec na raganje: " << birthMonth;

    return 0;
}