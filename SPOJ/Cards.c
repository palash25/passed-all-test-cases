#include <stdio.h>

int main(void) {
	int t;
	unsigned long long int n,r=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%llu",&n);
		r = (n*(3*n+1))/2;
		r = r%1000007;
		printf("%llu\n",r%1000007);
	}
	return 0;
}
