#include <iostream>

using namespace std;

void swap(int a[], int b, int c) {
    int temp = a[b];
    a[b] = a[c];
    a[c] = temp;
}

bool isMatching(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] == i + 1) return true;
    }
    return false;
}

bool nextPermutation(int a[], int n) {
    int j = n-2;
    while (j != -1 && a[j] > a[j+1]) j--;
    if (j == -1) return false;
    int k = n-1;
    while (a[j] > a[k]) k--;
    swap(a, j, k);

    int left = j + 1;
    int right = n - 1;
    while (left < right) {
        swap(a, left, right);
        left++;
        right--;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }
    int k = 1;
    while (nextPermutation(a, n)) {
        if (isMatching(a, n)) {
            k++;
        }
    }
    cout << k;

    return 0;
}
