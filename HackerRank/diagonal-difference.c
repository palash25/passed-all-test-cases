#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,s1=0,s2=0; 
    scanf("%d",&n);
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){
          
          scanf("%d",&a[a_i][a_j]);
           if(a_i==a_j)
               s1+=a[a_i][a_j];
           if(a_i+a_j==n-1)
               s2+=a[a_i][a_j];
       }
    }
    printf("%d\n",abs(s2-s1));
    return 0;
}
