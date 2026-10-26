//
// Created by David Arsov on 22.10.26.
//


// Да се напише програма за пресметување на возраста на едно куче во човечки
// години. Кучешката возраст се чита од стандарден влез.
// Доколку се внесе негативен број за возраста, да се
// испечати следната порака: “Vozrasta mora da bide pozitiven broj”.
// Забелешка: За првите две години, една кучешка година е еднаква
// на 10,5 човечки години. После тоа, секоја кучешка година е еднаква на
// 4 човечки години.

#include <iostream>

using namespace std;

int main() {

    int years;
    cin >> years;

    if (years < 0) {
        cout << "Vozrasta mora da bide pozitiven broj";
        return 0;
    } else {
        if (years <= 2) {
            cout << years * 10.5;
        } else {
            cout << 10.5 * 2 + (years - 2) * 4;
        }
    }


    return 0;
}