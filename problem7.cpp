#include <iostream>
using namespace std;

void power(double* n, const int* p) {
    double result = 1;
    int exponent = *p;

    for (int i = 0; i < exponent; ++i) {
        result *= *n;
    }

    *n = result;
}

int main() {
    double num;
    int exp;

    cin >> num >> exp;

    power(&num, &exp);

    cout << num << endl;

    return 0;
}
