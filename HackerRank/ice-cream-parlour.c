#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,m,n,s=0,i,j;
    scanf("%d\n",&t);
    while(t--)
    {
        scanf("%d\n",&m);
        scanf("%d\n",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d ",&a[i]);
        
        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
                 if(a[i]+a[j]==m)
                 {
                     printf("%d %d\n",i+1,j+1);
                     break;
        }
    }
    return 0;
}