#include <stdio.h>
#include<math.h>
int fun(int n)
{
    int i=0;
    while(n){
        i++;
        n/=10;
    }
    return i;
}
int main()
{
    int a;
    scanf("%d",&a);
    if((a*a)%(int)pow(10,fun(a))==a) 
        printf("%d是同构数\n",a);
    else 
        printf("%d不是同构数\n",a);
    return 0;
}