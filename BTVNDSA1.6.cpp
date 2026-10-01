#include <iostream>
using namespace std;

void xoa(int a[], int &n, int k) {
    for (int i = k; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;
}

void chen(int a[], int &n, int y, int m) {
    for (int i = n; i > m; i--)
        a[i] = a[i - 1];
    a[m] = y;
    n++;
}

int main() {
    int n, a[100], k, m, y;

    cout << "Nhap N: ";
    cin >> n;

    cout << "Nhap day: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Nhap k: ";
    cin >> k;
    xoa(a, n, k);

    cout << "Day sau khi xoa: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\nNhap y va m: ";
    cin >> y >> m;
    chen(a, n, y, m);

    cout << "Day sau khi chen: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

/*
Do phuc tap:

Ham xoa:
- Thoi gian: O(N) truong hop xau nhat, O(1) truong hop tot nhat.
- Bo nho: O(1).

Ham chen:
- Thoi gian: O(N) truong hop xau nhat, O(1) truong hop tot nhat.
- Bo nho: O(1).
*/
