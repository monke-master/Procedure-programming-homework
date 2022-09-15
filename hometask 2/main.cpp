#include <iostream>
#include <math.h>

using namespace std;
void task1() {
    double R, r, h;

    cout << "������� ������ ������� ���������:" << endl;
    cin >> R;
    cout << "������� ������ �������� ���������:" << endl;
    cin >> r;
    cout << "������� ������ ������:" << endl;
    cin >> h;
    cout << "" << endl;

    double l = sqrt(h*h + pow(R - r, 2));
    double V = 1.0/3.0*M_PI*h*(R*R + R*r + r*r);
    double S = M_PI*(R*R + (R + r)*l + r*r);
    cout << "����� ������� ������: " << V << endl;
    cout << "������ �����������: " << S << endl;

}

void task2() {
    double x, a, w;

    cout << "������� �:" << endl;
    cin >> x;
    cout << "������� �:" << endl;
    cin >> a;

    if (abs(x) < 1) {
        w = a * log(abs(x));
        cout << "��������� ����������: " << w;
    } else {
        if (a - x*x >= 0) {
            w = sqrt(a - x * x);
            cout << "��������� ����������: " << w;
        }
        else
            cout << "���������� ���������, ������ ��� a - x^2 < 0";
    }
}

double z(double x, double y, double b) {
    return log(b - y)*sqrt(b - x);

}

void task3() {
    double x, y, b;

    cout << "������� �:" << endl;
    cin >> x;
    cout << "������� y:" << endl;
    cin >> y;
    cout << "������� b:" << endl;
    cin >> b;

    if (b - x < 0)
        cout << "���������� ���������: b - x < 0" << endl;
    else if (b - y < 0)
        cout << "���������� ���������: b - y < 0" << endl;
    else
        cout << "���������: " << z(x, y, b) << endl;
}

void task4() {
    double n;

    cout << "������� N:" << endl;
    cin >> n;
    if (n < 0)
        n = 0;
    for (int i = (int)n + 1 ; i <= (int)n + 10; i++)
        cout << i << endl;
}

double y(double x) {
    return (x*x - 2*x + 2) / (x - 1);
}

void task5() {
    double x = -4;
    while (x <= 4) {
        if (x == 1)
            cout << "��� � = 1 ������� �� ����������" << endl;
        else
            cout << "��� � = " << x << " y = " << y(x) << endl;
        x += 0.5;
    }
}


int main() {
    setlocale(LC_ALL, "RUSSIAN");
     //task1();
    //task2();
   // task3();
    //task4();
    task5();
    return 0;
}
