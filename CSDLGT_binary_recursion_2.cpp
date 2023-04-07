//https://viettuts.vn/bai-tap-c/bai-tap-ve-de-quy-trong-c
#include<stdio.h>
#include <conio.h>
#include<math.h>
int fib(int n){
  if(n <= 2) return 1;
  return fib(n - 1) + fib(n - 2);
}
int main() {
 int i;
    printf("10 so dau tien cua day so Fibonacci: \n");
        for (i = 0; i < 10; i++) {
        printf("%d ", fib(i));
    }
}