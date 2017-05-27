#include <stdio.h>

int main(void) {
	int a,r;
    scanf("%d",&a);
    while(a)
    {
    	r = (a*(a+1)*(2*a+1))/6;
    	printf("%d\n",r);
    	scanf("%d",&a);
    }
	return 0;
}
