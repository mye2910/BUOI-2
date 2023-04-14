#include <stdio.h>
#define MAX 100

void NhapMang(int a[] , int n) {
    
    for ( int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[] , int n) {
    
    for ( int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
   	
}

int KiemTraMangToanGiaTriAm(int a[], int n) {
    
    if (n == 0) {
        return 1;
    }
  
    if (a[0] >= 0) {
        return 0;
    }
   
    return KiemTraMangToanGiaTriAm(a + 1, n - 1);
}

int main() {
    int n, a[MAX];
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    NhapMang(a, n);
    printf("Mang vua nhap la: ");
    XuatMang(a, n);
    if (KiemTraMangToanGiaTriAm(a, n)) {
        printf("Mang nay toan gia tri am\n");
    } else {
        printf("Mang nay khong toan gia tri am\n");
    }
    return 0;
}