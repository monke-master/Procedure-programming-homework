#include <iostream>
#include <math.h>

using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    cout << "�� ����� ����? [Y/N]" << endl;
    string day, lamp, curtains;
    bool isDay, isLamp, isCurtains;
    cin >> day;
    if (day == "Y")
        isDay = true;
    else if (day == "N")
        isDay = false;
    cout << "������������ ������ �����";
    
    cout << "������� ������������ a, b � c:  " << endl;
    double a, b, c;
    cin >> a >> b >> c;


}


