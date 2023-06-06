#include <iostream>
#include <Windows.h>

using namespace std;

double power(double base, int exponent) {
    double result = 1.0;

    if (exponent >= 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    }
    else {
        for (int i = 0; i < -exponent; i++) {
            result /= base;
        }
    }

    return result;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double base;
    int exponent;

    cout << "Введіть основу степеня: ";
    cin >> base;

    cout << "Введіть показник степеня: ";
    cin >> exponent;

    double result = power(base, exponent);

    cout << "Результат: " << result << endl;

    return 0;
}
