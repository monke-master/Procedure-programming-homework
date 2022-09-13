#include <iostream>
#include <math.h>

using namespace std;

void task1() {
    cout << "Игорь Стрешнев";
}

void task2() {
    int x, y;
    cout << "Введите два целых числа" << endl;
    cin >> x >> y;

    cout << "Сумма: " << x + y << endl;
    cout << "Разность: " << x - y << endl;
    cout << "Произведение: " << x*y << endl;
    if (x % y == 0)
        cout << "Деление: " << x / y << endl;
    else
        cout << "x не делится на y";
}

void task3() {
    double b, c;
    cout << "Введите b и c" << endl;
    cin >> b >> c;

    if (b == 0 && c == 0)
        cout << "х - любое действительное число" << endl;
    else if (b == 0)
        cout << "Нет корней" << endl;
    else
        cout << "x = " << -c/b << endl;
}

void task4() {
    double a,b,c,d,x1,x2;

    cout << "Введите a" << endl;
    cin >> a;
    cout << "Введите b" << endl;
    cin >> b;
    cout << "Введите c" << endl;
    cin >> c;

    d = b * b - 4 * a * c;
    if (a == 0) {
        if (b == 0 && c == 0)
            cout << "х - любое действительное число" << endl;
        else if (b == 0)
            cout << "Нет корней" << endl;
        else
            cout << "x = " << -c/b << endl;
    }
    else if (d > 0) {
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (d == 0) {
        x1 = -(b / (2 * a));
        cout << "x1 = x2 = " << x1 << endl;
    }
    else
        cout << "Нет действительных корней" << endl;
}


void task5() {

    string day, lamp, curtains;
    bool isDay, isLamp, isCurtains;

    while (!(day == "Y" || day == "N")) {
        cout << "На улице день? [Y/N]" << endl;
        cin >> day;
        if (day == "Y")
            isDay = true;
        else if (day == "N")
            isDay = false;
        else
            cout << "Неправильный формат входных данных!" << endl;
    }

    while (!(curtains == "Y" || curtains == "N")) {
        cout << "Шторы раздвинуты [Y/N]?" << endl;
        cin >> curtains;
        if (curtains == "Y")
            isCurtains = true;
        else if (curtains == "N")
            isCurtains = false;
        else
            cout << "Неправильный формат входных данных!" << endl;
    }


    while (!(lamp == "Y" || lamp == "N")) {
        cout << "Лампа включена? [Y/N]" << endl;
        cin >> lamp;
        if (lamp == "Y")
            isLamp = true;
        else if (lamp == "N")
            isLamp = false;
        else
            cout << "Неправильный формат входных данных!" << endl;
    }

    if (isDay && isCurtains || isLamp)
        cout << "В комнате светло";
    else
        cout << "В комнате темно";
}


int main() {
    setlocale(LC_ALL, "RUSSIAN");
    //task1();
    //task2();
    //task3();
    task4();
    // task5();
}



