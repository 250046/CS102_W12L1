#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

string normalize(const string& input) {
    if (input.empty()) return "";

    string result = input;
    result[0] = toupper(result[0]);

    for (size_t i = 1; i < result.size(); ++i) {
        result[i] = tolower(result[i]);
    }

    return result;
}

int main() {
    string str;
    cin >> str;

    string normalized = normalize(str);
    cout << normalized << endl;

    return 0;
}
