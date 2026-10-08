#include <iostream>
using namespace std;

int tinhTong(int a[][100], int n, int m) {
    int tong = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            tong += a[i][j];

    return tong;
}

void xoaDong(int a[][100], int &n, int m, int i) {
    // D?ch các dòng phía sau lên 1 dòng
    for (int k = i; k < n - 1; k++)
        for (int j = 0; j < m; j++)
            a[k][j] = a[k + 1][j];

    n--;
}

int main() {
    int a[100][100], n, m, i;

    cout << "Nhap N, M: ";
    cin >> n >> m;

    cout << "Nhap mang:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    cout << "Tong cac phan tu = " << tinhTong(a, n, m) << endl;

    cout << "Nhap dong can xoa: ";
    cin >> i;

    if (i >= 0 && i < n) {
        xoaDong(a, n, m, i);

        cout << "Mang sau khi xoa:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    } else {
        cout << "Vi tri dong khong hop le!";
    }

    return 0;
}

// Do phuc tap thoi gian: O(NxM).
// Do phuc tap bo nho: O(1).


