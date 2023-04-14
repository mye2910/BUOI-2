#include<stdio.h>
int Tinh(int n)
{
   if(n==0)
      return(1);
   return(n*Tinh(n-1));
}
int main()
{
   int num, T(n);
   printf("\nNhap so can tinh :");
   scanf("%d",&num);
   T(n) =Tinh(num);
   printf("\nGiai thua cua %d la: %d",num, T(n));
   return 0;
}