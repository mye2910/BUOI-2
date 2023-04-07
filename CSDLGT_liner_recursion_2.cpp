//https://freetuts.net/de-quy-tuyen-tinh-2946.html
#include<stdio.h>
int factorial(int n)
{
   if(n==0)
      return(1);
   return(n*factorial(n-1));
}
int main()
{
   int num, fact;
   printf("\nNhap so can tinh giai thua:");
   scanf("%d",&num);
   fact =factorial(num);
   printf("\nGiai thua cua %d la: %d",num, fact);
   return 0;
}