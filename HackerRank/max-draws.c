#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,n,r;
    scanf("%d",&t);
    while(t--)
    {
      scanf("%d",&n);
      if(n==1)
      r=2;
      else
      r=n+1;
        
      printf("%d\n",r);
    }
    return 0;
}