#include <iostream>
using namespace std;

int evenCount(const int* a, int size) {
    int count = 0;
    const int* end = a + size;

    while (a < end) {
        if (*a % 2 == 0) {
            count++;
        }
        a++; 
    }

    return count;
}

int main() {
    int size;
    cin >> size;

    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        cin >> *(arr + i); 
    }

    cout << evenCount(arr, size) << endl;

    delete[] arr;
    return 0;
}
