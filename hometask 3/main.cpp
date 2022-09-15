#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;
void task1() {
    double s, p, r, m;
    int n;

    cout << "¬ведите S" << endl;
    cin >> s;
    cout << "¬ведите p" << endl;
    cin >> p;
    cout << "¬ведите n" << endl;
    cin >> n;

    r = p / 100;
    m = s*r*pow(1 + r, n) / (12*(pow(1 + r, n) - 1));
    cout << "m = " << m << endl;
}

void task2() {
    double s, r, m;

    int n;
    cout << "¬ведите S" << endl;
    cin >> s;
    cout << "¬ведите m" << endl;
    cin >> m;
    cout << "¬ведите n" << endl;
    cin >> n;

    double minDiff = 10000000000;
    for (int p = -10000; p <= 10000; p++) {

    }
}

void task3() {
    ifstream file("C:\\c++ projects\\hometask 3\\file.txt");
    string line;
    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << '\n';
        }
        file.close();
    } else {
        cout << "ќшибка при открытии файла" << endl;
    }
}

void task4() {
    ifstream file("C:\\c++ projects\\hometask 3\\file.txt");
    string line;
    int k = 0;
    if (file.is_open()) {
        while (getline(file, line)) {
            string str;
            str = "";
            for (char c: line) {
                if (isdigit(c)) {
                    str += c;
                    k++;
                } else {
                    if (str != "")
                        cout << str << " ";
                    str = "";

                }
            }
            cout << '\n';
        }
        file.close();
        if (k == 0)
            cout << "¬ тексте чисел нет";
    } else {
        cout << "ќшибка при открытии файла" << endl;
    }
}

void task5() {
    int array[30];
    cout << "¬ведите 30 букв:\n" ;
    for (int i = 0; i < 30; i++) {
        char x;
        cin >> x;
        array[i] = static_cast<char>(x);
    }


}

int mergesort(int array[], int left, int right) {
    if (left == right)
        return array[left];
    else {}
}

using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    //task1();
    //task3();
    task4();
    return 0;
}
