#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    if (n < 0) {
        cout << "Khong tinh duoc giai thua cua so am!" << endl;
        return 0;
    }
    long long fact = 1; 
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << n << "! = " << fact << endl;

    return 0;
}

// Do phuc tap thoi gian: O(N).
// Do phuc tap bo nho: O(1).
