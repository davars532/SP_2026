//
// Created by David Arsov on 15.10.26.
//


#include <iostream>

using namespace std;

// Да се напише програма за пресметување и печатење на плоштината
// и периметарот на круг. Радиусот на кругот се чита од стандарден
// влез (тастатура) како децимален број.

int main() {
    float r;
    const float pi = 3.14;

    cin >> r;

    float l = 2 * r * pi;
    float p = r * r * pi;

    cout << "Perimetarot e: " << l << endl;
    cout << "Plostinata e: " << p << endl;
    return 0;
}