#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d%d",&a,&b);
   int r = a-b;
   if(r%10==9)
   printf("%d\n",(r-1));
   else
   printf("%d\n",(r+1));
   return 0;
} 