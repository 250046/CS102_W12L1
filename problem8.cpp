#include <iostream>
#include <vector>
using namespace std;

vector<int> addOne(vector<int>& v) {
    int carry = 1;

    for (int i = 0; i < v.size(); ++i) {
        int sum = v[i] + carry;
        v[i] = sum % 10;
        carry = sum / 10;
    }

    if (carry) {
        v.push_back(carry);
    }

    return v;
}

int main() {
    vector<int> digits;
    int d;


    while (cin >> d) {
        digits.push_back(d);
        if (cin.peek() == '\n') break;
    }

    vector<int> result = addOne(digits);

    for (int digit : result) {
        cout << digit << " ";
    }
    cout << endl;

    return 0;
}
