//https://freetuts.net/de-quy-long-nested-recursion-2959.html
#include <stdio.h>
 
int A(int m, int n){
  if(m == 0) 
    return n + 1;
  else if(n == 0) 
    return A(m - 1, 1);
  else 
    return A(m-1, A(m, n-1));
}
int main() {
  int kq = A(2,1); 
  printf("Voi m = 2 và n = 1");
  printf("\nKet qua: %d",kq);
}