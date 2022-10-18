#include <iostream>
#include <math.h>
#include "map"
#include <set>
#include <algorithm>
using namespace std;

void spinners() {
    long long a, b, c;
    cout << "Введите a, b, c: " << endl;
    cin >> a >> b >> c;
    cout << (int)((c - a) / b);
}

void spinnersAgain() {
    long long a, b, m;
    cout << "Введите m: " << endl;
    cin >> m;
    b = m % 3;
    a = (m - 4*b) / 3;
    if (m < 3 || m == 5)
        cout << 0 << " " << 0;
    else
        cout << a << " " << b;
}

void squares(){
    long long n, m, result;
    cout << "Введите n и m: " << endl;
    cin >> n >> m;
    result = (n*n + n)*(m*m + m)/4;
    cout << result;
}


void train() {
    int n;

    cin >> n;
    int coupes[9];
    for (int i = 0; i < 9; i++) {
        coupes[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < 37) {
            if (x % 4 == 0)
                coupes[x / 4 - 1] += 1;
            else
                coupes[x / 4] += 1;
        }
        else
            coupes[abs(x / 2 + x % 2 - 27)] += 1;
    }

    int k = 0;
    int answer = 0;
    for (int coupe : coupes) {
        if (coupe == 6)
            k++;
        else {
            answer = max(answer, k);
            k = 0;
        }
    }
    cout << max(answer, k);
}

void cinema() {
    long long n, k;
    map<long long, long long> lines;
    set<long long> keys;
    cin >> n;
    cin >> k;
    keys.insert(n);
    lines[n] = 1;
    long long left, right;
    while (k > 0) {
        long long m = *max_element(keys.begin(), keys.end());
        long long count = min(k, lines[m]);
        k -= count;
        left = m / 2 - (m + 1) % 2;
        right = m / 2;
        keys.erase(m);
        keys.insert(left);
        keys.insert(right);
        lines[left] = keys.find(left) == keys.end() ? count : lines[left] + count;
        lines[right] = keys.find(right) == keys.end() ? count : lines[right] + count;
        lines[m] = 0;
    }
    cout << left << " " << right;
}

int main() {
    //spinners();
    //spinnersAgain();
    //squares();
    //train();
    cinema();
    return 0;
}
