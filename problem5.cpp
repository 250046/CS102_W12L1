#include <iostream>
using namespace std;

void swap(int* arr1, int* arr2, int size) {
    while (size--) {
        int temp = *arr1;
        *arr1 = *arr2;
        *arr2 = temp;
        arr1++;
        arr2++;
    }
}

int main() {
    int size;
    cin >> size;

    int* a = new int[size];
    int* b = new int[size];


    for (int i = 0; i < size; ++i)
        cin >> *(a + i);


    for (int i = 0; i < size; ++i)
        cin >> *(b + i);

    swap(a, b, size);


    for (int i = 0; i < size; ++i)
        cout << *(a + i) << " ";
    cout << endl;

    for (int i = 0; i < size; ++i)
        cout << *(b + i) << " ";
    cout << endl;

    delete[] a;
    delete[] b;

    return 0;
}
