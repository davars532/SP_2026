//
// Created by David Arsov on 22.10.26.
//

#include <iostream>

using namespace std;

// Да се напише програма со која ќе се отпечати
// максимумот од два броја чии вредности се читаат од тастатура.

int main() {

    int a, b;
    cin >> a >> b;

    if (a > b) {
        cout << a;
    } else if (b > a){
        cout << b;
    } else {
        cout << "Broevite se ednakvi";
    }

    int max = a > b ? a : b;
    cout << max << endl;

    return 0;
}