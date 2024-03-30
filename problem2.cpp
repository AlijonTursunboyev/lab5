

#include <iostream>
using namespace std;

int calculateF(int n) {
    if (n == 1) {
        return 3;
    } else {
        return calculateF(n - 1) * calculateF(n - 1) + 3;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = calculateF(n);
    cout << "The value of f(" << n << ") is: " << result << endl;

    return 0;
}
