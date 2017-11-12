#include <stdio.h>

int fun(int M, int a[])
{
 int n = 0;
 int i;

 for (i = 1; i < M; ++i)
 {
 if (i%7==0 ||i%11==0)
 {
 a[n] = i;
 n++;
 }
 }
 return n;
}
int main(void)
{ 
 int n;
 int count;
 int a[100];
 int i;

 printf("Input M:");
 scanf(" %d", &n);

 count = fun(n, a);
 printf("%d\n", count); 
 for (i = 0; i < count; ++i)
 { 
 printf(" %d ", a[i]); 
 }

 return 0;
}