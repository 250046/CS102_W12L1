#include <iostream>
using namespace std;

void sumArrays(const double* arr1, const double* arr2, double* sum, int size) {
    while (size--) {
        *sum = *arr1 + *arr2;
        arr1++;
        arr2++;
        sum++;
    }
}

int main() {
    int size;
    cin >> size;

    double* a = new double[size];
    double* b = new double[size];
    double* result = new double[size];


    for (int i = 0; i < size; ++i)
        cin >> *(a + i);


    for (int i = 0; i < size; ++i)
        cin >> *(b + i);


    sumArrays(a, b, result, size);


    for (int i = 0; i < size; ++i)
        cout << *(result + i) << " ";
    cout << endl;


    delete[] a;
    delete[] b;
    delete[] result;

    return 0;
}
