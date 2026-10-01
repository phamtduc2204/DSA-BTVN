#include <iostream>
#include <cmath>

using namespace std;

long long findGCD(long long x, long long y) {
    x = abs(x);
    y = abs(y);
    while (y != 0) {
        long long temp = x % y;
        x = y;
        y = temp;
    }
    return x;
}

void rutGonPhanSo(long long a, long long b) {
    if (b == 0) {
        cout << "Mau so phai khac 0!" << endl;
        return;
    }

    long long ucln = findGCD(a, b);

    a /= ucln;
    b /= ucln;

    if (b < 0) {
        a = -a;
        b = -b;
    }


    if (b == 1) {
        cout << "Phan so sau khi rut gon: " << a << endl;
    } else {
        cout << "Phan so sau khi rut gon: " << a << "/" << b << endl;
    }
}

int main() {
    long long a, b;
    cout << "Nhap tu so a: ";
    cin >> a;
    cout << "Nhap mau so b: ";
    cin >> b;

    rutGonPhanSo(a, b);

    return 0;
}

/*
Phan tich do phuc tap:

- Do phuc tap thoi gian:
  Truong hop tot nhat: O(1).
  Truong hop trung binh: O(log n).
  Truong hop xau nhat: O(log n).

- Do phu ctap bo nho:  O(1).
*/
