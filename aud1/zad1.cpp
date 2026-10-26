//
// Created by David Arsov on 15.10.26.
//

#include <iostream>

using namespace std;

// Да се напише програма која ќе ја пресметува вредноста
// на математичкиот израз: x = 3/2 + (5 – 46*5/12)



int main() {
    int x = 3 / 2 + (5 - 46 * 5 / 12);
    float p1 = 3.0 / 2;
    float p2 = 5 / 12.0;
    float p3 = 46 * 5 / 12.0;
    float p4 = 5 - p3;

    float result = p1 + p4;
    cout << result << endl;
    return 0;
}