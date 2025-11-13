#include <iostream>
using namespace std;

bool is_in(const int* arr1, const int* arr2, int size1, int size2) {
    const int* p1 = arr1;

    while (p1 < arr1 + size1) {
        const int* p2 = arr2;
        bool found = false;

        while (p2 < arr2 + size2) {
            if (*p1 == *p2) {
                found = true;
                break;
            }
            p2++;
        }

        if (!found)
            return false;

        p1++;
    }

    return true;
}

int main() {
    int size1, size2;
    cin >> size1;
    int* arr1 = new int[size1];
    for (int i = 0; i < size1; ++i)
        cin >> *(arr1 + i);

    cin >> size2;
    int* arr2 = new int[size2];
    for (int i = 0; i < size2; ++i)
        cin >> *(arr2 + i);

    cout << is_in(arr1, arr2, size1, size2) << endl;

    delete[] arr1;
    delete[] arr2;

    return 0;
}
