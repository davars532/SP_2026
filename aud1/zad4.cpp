//
// Created by David Arsov on 15.10.26.
//

#include <iostream>

using namespace std;

// Да се напише програма за пресметување на аритметичката средина
// на броевите 3, 5 и 12.



int main() {

    float a = 3;
    float b = 5;
    float c = 12;

    cin >> a >> b >> c;

    float arit = (a + b + c) / 3.0;

    cout << "Aritmeticka sredina: " << arit << endl;

    return 0;
}