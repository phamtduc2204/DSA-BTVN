#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;

    if (n <= 0) {
        cout << "So luong phan tu phai lon hon 0!" << endl;
        return 0;
    }

    double a[10000]; 
    double sum = 0.0;

    cout << "Nhap " << n << " so thuc: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i]; 
}
    double avg = sum / n;
    cout << "Gia tri trung binh cua day: " << avg << endl;
    cout << "Cac gia tri lon hon hoac bang gia tri trung binh: ";
    for (int i = 0; i < n; i++) {
        if (a[i] >= avg) {
            cout << a[i] << " ";
        }
    }
    cout << endl;

    return 0;
}


// Do phuc tap thoi gian: O(N).
// Do phuc tap bo nho: O(N).
