#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;

    int a[10000]; 
    long long sum = 0; 

    cout << "Nhap " << n << " phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];  
        sum += a[i];  
    }

    cout << "Tong cac phan tu trong day la: " << sum << endl;

    return 0;
}

// Do phuc tap thoi gian: O(N).
// Do phuc tap bo nho: O(N).
