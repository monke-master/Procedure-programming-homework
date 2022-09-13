#include <iostream>
#include <math.h>

using namespace std;
void task1() {
    double R, r, h;

    cout << "Введите радиус нижнего основания:" << endl;
    cin >> R;
    cout << "Введите радиус верхнего основания:" << endl;
    cin >> r;
    cout << "Введите высоту конуса:" << endl;
    cin >> h;
    cout << "" << endl;

    double l = sqrt(h*h + pow(R - r, 2));
    double V = 1.0/3.0*M_PI*h*(R*R + R*r + r*r);
    double S = M_PI*(R*R + (R + r)*l + r*r);
    cout << "Объем данного конуса: " << V << endl;
    cout << "Полная поверхность: " << S << endl;

}

void task2() {
    double x, a, w;

    cout << "Введите х:" << endl;
    cin >> x;
    cout << "Введите а:" << endl;
    cin >> a;

    if (abs(x) < 1) {
        w = a * log(abs(x));
        cout << "Результат вычислений: " << w;
    } else {
        if (a - x*x >= 0) {
            w = sqrt(a - x * x);
            cout << "Результат вычислений: " << w;
        }
        else
            cout << "Невозможно вычислить, потому что a - x^2 < 0";
    }
}

double z(double x, double y, double b) {
    return log(b - y)*sqrt(b - x);

}

void task3() {
    double x, y, b;

    cout << "Введите х:" << endl;
    cin >> x;
    cout << "Введите y:" << endl;
    cin >> y;
    cout << "Введите b:" << endl;
    cin >> b;

    if (b - x < 0)
        cout << "Невозможно вычислить: b - x < 0" << endl;
    else if (b - y < 0)
        cout << "Невозможно вычислить: b - y < 0" << endl;
    else
        cout << "Результат: " << z(x, y, b) << endl;
}

void task4() {
    int n;

    cout << "Введите натуральное N:" << endl;
    cin >> n;

    for (int i = n ; i <= n + 10; i++)
        cout << i << endl;
}

double y(double x) {
    return (x*x - 2*x + 2) / (x - 1);
}

void task5() {
    double x = -4;
    while (x <= 4) {
        if (x == 1)
            cout << "При х = 1 функция не существует" << endl;
        else
            cout << "При х = " << x << " y = " << y(x) << endl;
        x += 0.5;
    }
}


int main() {
    // task1();
    // task2();
    // task3();
    //task4();
    task5();
    return 0;
}
