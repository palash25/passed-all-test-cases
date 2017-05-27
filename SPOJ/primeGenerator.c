#include <stdio.h>
#include <stdbool.h>
#define false 0
#define true 1
int prime(int N);
int main(void) {
	int t,a,b,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&a,&b);
		for(i=a;i<=b;i++)
		{
			if(prime(i)==true)
			printf("%d\n",i);
		}
	}
	return 0;
}

int prime(int N)
{
	int i;
	if (N < 2) return false;
    for (i = 2; i*i <= N; i++)
    if (N % i == 0) return false;
    return true;
}
