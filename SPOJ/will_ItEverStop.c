#include <stdio.h>

int main(void) {
	unsigned long long int x;
	scanf("%llu",&x);
	if((x&(x-1))==0)
	printf("TAK\n");
	else
	printf("NIE\n");
	return 0;
}
