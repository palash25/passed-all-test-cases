#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,k,i,b,s=0;
    scanf("%d %d\n",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
        if(i!=k)
        s+=a[i];
    } 
    s/=2;
    scanf("%d\n",&b);
    if(s==b)
        printf("Bon Appetit\n");
    else
        printf("%d\n",a[k]/2);
    return 0;
}
