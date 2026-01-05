#include <iostream>
#include <iterator>
#include <string>
using namespace std;

int main() {

    int N;
    string num;
    int sum = 0;

    cin >> N;
    cin >> num;

    for (int i = 0; i < N; i++) {
        sum += num[i] - '0';
    }

    cout << sum;

    return 0;
}