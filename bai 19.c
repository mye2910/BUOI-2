#include <stdio.h>
#define MAX 100

void NhapMang(float a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}

void XuatMang(float a[], int n) {
    
    for (int i = 0; i < n; i++) {
        printf("%0.2f ", a[i]);
    }
    
}

float TimMax(float a[], int n) {
    if (n == 1) {
        return a[0];
    }
    float max_n_1 = TimMax(a, n - 1);
    if (max_n_1 > a[n - 1]) {
        return max_n_1;
    } else {
        return a[n - 1];
    }
}

int main() {
    int n;
    float a[MAX];
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    NhapMang(a, n);
    printf("Mang vua nhap la: ");
    XuatMang(a, n);
    printf("Gia tri lon nhat trong mang la: %0.2f\n", TimMax(a, n));
    return 0;
}