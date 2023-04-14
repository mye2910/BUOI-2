#include <stdio.h>

double tongcacsoduong(double arr[], int n) {
    if (n == 0) {
        return 0;
    } else {
        double current = arr[n-1];
        double subResult = tongcacsoduong(arr, n-1);
        if (current > 0) {
            return current + subResult;
        } else {
            return subResult;
        }
    }
}

int main() {
    double arr[] = {-1.5, 2.0, -3.7, 4.5, 0.8};
    int n = 5;
    double result = tongcacsoduong(arr, n);
    printf("tong cac gia tri duong co trong mang : %lf", result);
    return 0;
}