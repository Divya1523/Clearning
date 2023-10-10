#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,area;
   scanf("%i%i%i",&a,&b,&c);
   int s=(a+b+c)/2;
   printf("%i", area=sqrt((s*(s-a)*(s-b)*(s-c))));
   return 0;
} 