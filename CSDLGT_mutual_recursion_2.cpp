//https://freetuts.net/de-quy-tuong-ho-mutual-recursion-2961.html
#include <stdio.h>
#include <stdbool.h>
bool isEven(int n);
bool isOdd(int n);
  
bool isEven(int n){
  if(n == 0)
    return true;
  else
    return isOdd(n - 1);
}
  
bool isOdd(int n){
  return !isEven(n);
}
 
int main() {
  int n = 5;
  bool kq = isEven(n);
  if(kq == true)
    printf("%d là so chan",n);
  else
    printf("%d là so le",n);
}