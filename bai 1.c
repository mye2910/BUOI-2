#include <iostream>
using namespace std;

int timkiemnhiphan(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return timkiemnhiphan(arr, left, mid - 1, x);

        return timkiemnhiphan(arr, mid + 1, right, x);
    }

    return -1;
}

int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = timkiemnhiphan(arr, 0, n - 1, x);

    if (result == -1)
        cout << "Khong tim thay " << x << " trong mang.";
    else
        cout << x << " nam o vi tri " << result << " trong mang.";

    return 0;
}