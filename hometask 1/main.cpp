#include <iostream>
#include <math.h>

using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    cout << "На улице день? [Y/N]" << endl;
    string day, lamp, curtains;
    bool isDay, isLamp, isCurtains;
    cin >> day;
    if (day == "Y")
        isDay = true;
    else if (day == "N")
        isDay = false;
    cout << "Неправильный формат ввода";
    
    cout << "Введите коээфициенты a, b и c:  " << endl;
    double a, b, c;
    cin >> a >> b >> c;


}


