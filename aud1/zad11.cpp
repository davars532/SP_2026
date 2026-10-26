//
// Created by David Arsov on 15.10.26.
//

#include <iostream>

using namespace std;

// Да се напише програма каде од тастатура ќе се внесе
// трицифрен цел број. Програмата ќе ја испечати најзначајната
// и најмалку значајната цифра од бројот

// Пример: Ако се внесе бројот 795, програмата ќе испечати:
// Najznacajna cifra e 7, a najmalku znacajna e 5.
// ПОМОШ: Искористете целобројно делење и остаток од делење.


int main() {

    int a;
    cin >> a;

    cout << "Najmalku znajcajna cifra: " << a % 10 << endl;
    cout << "Najznacajna cifra: " << a / 1000 << endl;
    return 0;
}