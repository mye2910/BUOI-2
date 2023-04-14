#include <iostream>
using namespace std;

int demsoluongdequy(float arr[], int n, int i) {
    if (i >= n) {
        return 0;
    }
    if (arr[i] > 0) {
        return 1 + demsoluongdequy(arr, n, i + 1);
    }
    return demsoluongdequy(arr, n, i + 1);
}

int main() {
    float arr[] = {1.5, -2.5, 3.0, 4.5, -5.0, 6.5, -7.0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = demsoluongdequy(arr, n, 0);
    cout << "So luong gia tri duong trong mang: " << count << endl;
    return 0;
}