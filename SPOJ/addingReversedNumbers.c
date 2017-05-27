#include <stdio.h>

int main(void) {
	int t,a,b,s=0;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d %d",&a,&b);
    	s = rev(a)+rev(b);
    	printf("%d\n",rev(s));
    }
	return 0;
}


int rev(int n)
{
	int rn = 0;
	while(n!=0)
	{
		rn = rn*10 + n%10;
		n/=10;
	}
	return rn;
}
