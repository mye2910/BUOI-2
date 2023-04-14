#include <stdio.h>

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Nhap gia tri can tim kiem: ");
    scanf("%d", &x);

    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Tim thay gia tri %d tai vi tri %d\n", x, i);
            break;
        }
    }

    if (i == n) {
        printf("Khong tim thay gia tri %d trong mang\n", x);
    }

    return 0;
}