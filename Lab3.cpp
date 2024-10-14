#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

double f(double x) {
    return x * x - 2;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a = 0;
    double b = 2;
    double epsilon = 0.0001;
    double c;

    do {
        c = (a + b) / 2;
        if (f(a) * f(c) < 0) b = c;
        else a = c;
    } while ((b - a) >= epsilon);

    cout << "Корінь рівняння: " << c << endl;
    return 0;
}
