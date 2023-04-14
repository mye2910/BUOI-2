#include <stdio.h>
#include <math.h>

double tong(double arr[], int size){
    if (size == 0) {
        return 0; 
    }
    else {
        return arr[size-1] + tong(arr, size-1); 
    }
}

int main(){
    double arr[] = {1.5, 2.3, 3.7, 4.1, 5.2};
    int size = sizeof(arr) / sizeof(arr[0]);
    double total = tong(arr, size);
    printf("Tong cua mang la: %lf", total);
    return 0;
}