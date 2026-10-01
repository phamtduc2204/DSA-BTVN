#include <iostream>

using namespace std;
void SapXepTangDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;
    int a[10000]; 
    cout << "Nhap " << n << " phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    SapXepTangDan(a, n);
    cout << "Day so sau khi sap xep tang dan: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

// Do phuc tap thoi gian: O(N^2).
// Do phuc tap bo nho: O(N).
