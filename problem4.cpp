#include <iostream>
#include <iomanip>
using namespace std;

double Series(int n, int sign = 1) {
    if (n==1) {
        return sign*1.0;
    } else {
        return sign*(1.0 / n) +Series(n - 1, -sign);
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    double result = Series(n);
    cout <<fixed<<setprecision(4);
    cout << "The sum of  " << n << " terms  is: " << result << endl;

    return 0;
}
