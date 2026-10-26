//
// Created by David Arsov on 15.10.26.
//

#include <iostream>

using namespace std;

// Да се напише програма каде од тастатура ќе се внесе цена на производ,
// број на рати на кои се исплаќа и камата (каматата е број изразен во
// проценти од 0 до 100). Програмата треба да го испечати износот на
// ратата и вкупната сума што ќе се исплати за производот

// ПОМОШ: Пресметајте ја целата сума, па потоа ратата.



int main() {
    int cena, brRati, kamata;

    cin >> cena >> brRati >> kamata;

    float iznosKamata = cena * kamata / 100.0;
    float vkupnaCena = cena + iznosKamata;

    float iznosRata = vkupnaCena / brRati;

    cout << iznosRata << endl;

    return 0;
}