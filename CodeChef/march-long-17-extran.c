#include <stdio.h>
#include <stdlib.h>
 
inline int cmpfunc (const void * a, const void * b)
{
    if( *(long int*)a - *(long int*)b < 0 )
        return -1;
    if( *(long int*)a - *(long int*)b > 0 )
        return 1;
    if( *(long int*)a - *(long int*)b == 0 )
        return 0;
}
 
int main(void) {
	int t,n;
	register int i;
    scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    long int a[n];
	    for(i=0;i<n;i++)
	        scanf("%ld ",&a[i]);
 
	    qsort(a, n, sizeof(long int), cmpfunc);
	    if((a[1]-a[0])!=1)
	    printf("%ld\n",a[0]);
	    else if((a[n-1]-a[n-2])!=1)
	    printf("%ld\n",a[n-1]);
	    else{
	        for(i=1;i<n-2;i++)
	            if(a[i]==a[i+1])
	                printf("%ld\n",a[i]);
	    }
	    }
	return 0;
}