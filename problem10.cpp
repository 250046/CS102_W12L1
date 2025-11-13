#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& vec) {
    int result = 0;
    for (const int& num : vec) {
        result ^= num;
    }
    return result;
}

int main() {
    vector<int> v;
    int t;

    while (cin >> t) {
        v.push_back(t);
        if (cin.peek() == '\n') break;
    }

    cout << singleNumber(v) << endl;
    return 0;
}
