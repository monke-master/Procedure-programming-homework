#include <iostream>
#include <math.h>

using namespace std;

void task1() {
    string name;
    cout << "������� ���� ���:" << endl;
    cin >> name;
    cout << "������, " << name << "!" << endl;
}

void task2() {
    double x, y;
    cout << "������� ����� �����" << endl;
    cin >> x >> y;

    cout << "�����: " << x + y << endl;
    cout << "��������: " << x - y << endl;
    cout << "������������: " << x*y << endl;
    if (y != 0)
        cout << "�������: " << x / y << endl;
    else
        cout << "�� ���� ������ ������!";
}

void task3() {
    double b, c;
    cout << "������� b � c" << endl;
    cin >> b >> c;

    if (b == 0 && c == 0)
        cout << "� - ����� �������������� �����" << endl;
    else if (b == 0)
        cout << "��� ������" << endl;
    else
        cout << "x = " << -c/b << endl;
}

void task4() {
    double a,b,c,d,x1,x2;

    cout << "������� a" << endl;
    cin >> a;
    cout << "������� b" << endl;
    cin >> b;
    cout << "������� c" << endl;
    cin >> c;

    d = b * b - 4 * a * c;
    if (a == 0) {
        if (b == 0 && c == 0)
            cout << "� - ����� �������������� �����" << endl;
        else if (b == 0)
            cout << "��� ������" << endl;
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
        cout << "��� �������������� ������" << endl;
}


void task5() {

    int time;
    string lamp, curtains;
    bool isDay, isLamp, isCurtains;

    cout << "������� ������� ���:" << endl;
    cin >> time;

    isDay = (time > 6) && (time < 21);

    while (!(curtains == "Y" || curtains == "N")) {
        cout << "����� ���������� [Y/N]?" << endl;
        cin >> curtains;
        if (curtains == "Y")
            isCurtains = true;
        else if (curtains == "N")
            isCurtains = false;
        else
            cout << "������������ ������ ������� ������!" << endl;
    }


    while (!(lamp == "Y" || lamp == "N")) {
        cout << "����� ��������? [Y/N]" << endl;
        cin >> lamp;
        if (lamp == "Y")
            isLamp = true;
        else if (lamp == "N")
            isLamp = false;
        else
            cout << "������������ ������ ������� ������!" << endl;
    }

    if (isDay && isCurtains || isLamp)
        cout << "� ������� ������";
    else
        cout << "� ������� �����";
}


int main() {
    setlocale(LC_ALL, "RUSSIAN");
    //task1();
    //task2();
    //task3();
    //task4();
    task5();
}



