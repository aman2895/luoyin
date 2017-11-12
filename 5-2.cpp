#include <stdio.h>
double a(int num)
{
     double s=1;
     for(int i=1;i<=num;i++)
           s=s*i;
     return s;
}
void main()
{
   int n;
   scanf("%d",&n);
   double s=0;
   for(int i=1;i<=n;i++)
           s+=1.0/a(i);
   printf("%f",s);
}