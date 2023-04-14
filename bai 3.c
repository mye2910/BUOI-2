#include <iostream>
using namespace std;

int main() {
    int arr[] = {41, 23, 4, 14, 56, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("mang da duoc sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}