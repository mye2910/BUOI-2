#include <iostream>
using namespace std;

void sapxepnhanh(int arr[], int left, int right) {
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    };

    if (left < j)
        sapxepnhanh(arr, left, j);
    if (i < right)
        sapxepnhanh(arr, i, right);
}

int main() {
    int arr[] = {41, 23, 4, 14, 56, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    sapxepnhanh(arr, 0, n - 1);

    cout << "Mang da duoc sap xep: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}