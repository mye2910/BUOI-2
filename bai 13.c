#include <iostream>
using namespace std;
int demsoluongsoduong(float arr[], int n) {
    if (n == 0) {
        return 0;
    }
    int count = demsoluongsoduong(arr + 1, n - 1);
    if (arr[0] > 0) {
        count++;
    }
    return count;
}

int main() {
    float arr[] = { -3.5, 2.0, 0.0, 4.8, -1.2, 5.6, -7.3, 3.9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = demsoluongsoduong(arr, n);
    cout << "So luong gia tri duong trong mang: " << count << endl;
    return 0;
}