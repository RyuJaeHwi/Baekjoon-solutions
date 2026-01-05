#include <iostream>
#include <iterator>
#include <string>
using namespace std;

int main() {

    string num;

    cin >> num;

    for (int i = 0; i < num.length(); i += 10) {
        cout << num.substr(i, 10) << "\n";
    }

    return 0;
}