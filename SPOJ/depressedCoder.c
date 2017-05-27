#include<stdio.h>
int main(void) {
	int t,a,b,c,d,e,r=0;
	scanf("%d",&t);
    while(t--)
    {
       scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
       r = 14 - (a*c+b*d+e);
       if(r>=3)
       printf("Khushi\n");
       else
       printf("Hotash\n");
    }
	return 0;
}
