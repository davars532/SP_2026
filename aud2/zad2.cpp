//
// Created by David Arsov on 22.10.26.
//

#include <iostream>

using namespace std;

// Од тастатура се внесуваат координати на една точка од рамнина.
// Да се напише програма со која ќе се
// испечати на кој квадрант припаѓа внесената точка.

int main() {

    int x, y;
    cin >> x >> y;

    if (x > 0 && y > 0) {
        cout << "Prv kvadrant";
    } else if (x < 0 && y > 0) {
        cout << "Vtor kvadrant";
    } else if (x < 0 && y < 0) {
        cout << "Tret kvadrant";
    } else if (x > 0 && y < 0) {
        cout << "Cetvrt kvadrant";
    } else if (y == 0) {
        cout << "Lezi na X oska";
    } else if (x == 0) {
        cout << "Lezi na Y oska";
    } else if (x == 0 && y == 0){
        cout << "Koordinaten pocetok";
    }


    return 0;
}
