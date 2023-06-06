#include <iostream>
#include <Windows.h>

using namespace std;

bool isLuckyNumber(int number) {
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < 3; i++) {
        sum1 += number % 10;
        number /= 10;
    }
    for (int i = 0; i < 3; i++) {
        sum2 += number % 10;
        number /= 10;
    }

    return sum1 == sum2;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;

    cout << "Введіть шестизначне число: ";
    cin >> number;

    if (isLuckyNumber(number)) {
        cout << "Це щасливе число!" << endl;
    }
    else {
        cout << "Це не щасливе число." << endl;
    }

    return 0;
}
