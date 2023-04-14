#include <stdio.h>
#include <stdlib.h>

void sapxepmang(int arr[], int n);

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int* arr = (int*) malloc(n * sizeof(int)); 
    if (arr == NULL) {
        printf("Khong the cap phat bo nho!");
        return 0;
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    sapxepmang(arr, n);

    printf("Mang da sap xep theo thu tu tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr); 

    return 0;
}

void sapxepmang(int arr[], int n) {
    if (n == 1) {
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    sapxepmang(arr, n - 1);
}