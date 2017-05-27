#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,n,p,r; 
    scanf("%d",&t);
    while(t--)
    {
      scanf("%d",&n);
      if(n!=1)
      {p=n*n;
       r=(p-n)/2;
       printf("%d\n",r);}
      else
      {  r=0;
        printf("%d\n",r);}
    }
    return 0;
}
