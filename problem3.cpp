#include <iostream>
using namespace std;

bool is_mirrored(const int* a, const int* b, int size) {
    const int* b_tail = b + size - 1; 

    while (size--) {
        if (*a != *b_tail)
            return false;
        a++;
        b_tail--; 
    }

    return true;
}

int main() {
    int size;
    cin >> size;

    int* arr1 = new int[size];
    int* arr2 = new int[size];

    for (int i = 0; i < size; ++i)
        cin >> *(arr1 + i);

    for (int i = 0; i < size; ++i)
        cin >> *(arr2 + i);

    cout << is_mirrored(arr1, arr2, size) << endl;

    delete[] arr1;
    delete[] arr2;

    return 0;
}
