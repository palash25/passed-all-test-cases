#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int b[101];
int main() {
    
    int n,i,h;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
        {
        h = a[i]%101;
        b[h] += 1;
    }
    int max = b[0];
    for(i=1;i<101;i++)
        {
        if(b[i]>max)
            max=b[i];
    }
    printf("%d",(n-max));
    return 0;
}
