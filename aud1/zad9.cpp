//
// Created by David Arsov on 15.10.26.
//

#include <iostream>

using namespace std;

// Да се напише програма каде од тастатура ќе се внесе цена
// на производ, а потоа ќе ја испечати неговата цена со пресметан ддв.

// ПОМОШ: ДДВ е 18% од почетната цена

int main() {

    int cena;
    cin >> cena;

    // float vkupnaCena = cena + (cena * 18 / 100.0);

    // 18% = 0.18
    // cena = 1
    // 1 + 0.18 = 1.18
    float vkupnaCena = cena * 1.18;

    cout << vkupnaCena << endl;

    return 0;
}