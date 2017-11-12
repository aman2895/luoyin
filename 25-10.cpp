#include <stdio.h>
#include <conio.h>
float fun(float h)
{ long t;
h=h*1000;
t=(h+5)/10;
return (float)t/100;
}main()
{
float a;
clrscr();
printf("Enter a:"); scanf("%f",&a);
printf("The original data is:");
printf("%f\n\n",a);
printf("The result :%6.2f\n",fun(a));
}