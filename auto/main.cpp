#include <iostream>
#include <vector>
using namespace std;

void binSearch(int a[], int left, int right, int target, int &it) {

    int mid = (left + right) / 2;
    it += 1;
    if (a[mid] == target)
        return ;
    else if (a[mid] > target)
        binSearch(a, left, mid, target, it);
    else
        binSearch(a, mid, right, target, it);
}

void monke() {
    cout << "Введите количество ступенек, количество орехов и прочность орехов: \n";
    int n, k, p;
    cin >> n >> k >> p;

    int a[n + 1];
    for (int i = 1; i <= n; i++)
        a[i] = i;
    int it = 0;
    binSearch(a, 1, n, p, it);
    if (it > k)
        cout << "Обезьянке не хватит орехов(";
    else
        cout << it;

}

void bullsAndCows() {
    int a = rand() % 9 + 1;
    int b = rand() % 9 + 1;
    int c = rand() % 9 + 1;
    int d = rand() % 9 + 1;
    while (a == 0)
        a = rand() % 9 + 1;
    while (b == a)
        b = rand() % 9 + 1;
    while ((c == b) || (c == a))
        c = rand() % 9 + 1;
    while ((d == c) || (d == b) || (d == a))
        d = rand() % 9 + 1;

    int x;
    cout << "Попробуй угадать мое четырехзначное число!" << endl;
    cin >> x;
    while (x != a*1000 + b*100 + c*10 + d != x) {
        if ()
    }

}

int main() {
    monke();
    return 0;
}
