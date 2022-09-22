#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;
void task1() {
    double s, p, r, m;
    int n;

    cout << "Введите S" << endl;
    cin >> s;
    cout << "Введите p" << endl;
    cin >> p;
    cout << "Введите n" << endl;
    cin >> n;

    r = p / 100;
    m = s*r*pow(1 + r, n) / (12*(pow(1 + r, n) - 1));
    cout << "m = " << m << endl;
}

void task2() {
    double s,m;

    int n;
    cout << "Введите S" << endl;
    cin >> s;
    cout << "Введите m" << endl;
    cin >> m;
    cout << "Введите n" << endl;
    cin >> n;

    double minDiff = 10000000000;
    int answer;
    for (int p = -1000000; p <= 1000000; p++) {
        double r = p / 100.0;
        double realM = s*r*pow(1+r, n) / (12*(pow(1 + r, n) - 1));
        if (abs(realM - m) < minDiff) {
            minDiff = abs(realM - m);
            answer = p;
        }
    }
    cout << answer;
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
        cout << "Ошибка при открытии файла" << endl;
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
            cout << "В тексте чисел нет";
    } else {
        cout << "Ошибка при открытии файла" << endl;
    }
}

void merge(int array[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1];
    int R[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = array[i + left];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = array[i + mid + 1];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while(i < n1 && j < n2) {
        if (L[i] < R[j]) {
            array[k] = L[i];
            i++;
        } else {
            array[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        array[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        array[k] = R[j];
        j++;
        k++;
    }


}

void mergesort(int array[], int left, int right) {
    if (left >= right)
        return;
    int mid = (right + left) / 2;
    mergesort(array, left, mid);
    mergesort(array, mid + 1, right);
    merge(array, left, mid, right);
}

void task5() {
    const int n = 30;
    int array[n];

    cout << "Введите 30 букв:\n" ;
    for (int & i : array) {
        char x;
        cin >> x;
        i = int(x);
    }

    mergesort(array, 0, n - 1);
    for (int num : array) {
        cout << char(num);
    }

}





using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    //task1();
   // task2();
    //task3();
    //task4();
    task5();
    return 0;
}
