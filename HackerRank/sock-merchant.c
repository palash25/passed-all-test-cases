#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int c[n];
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    int s=0;
    int i,j;
     for(i=0;i<n-1;i++)
    {   
         if(c[i]==-1)
             continue;
         else
         {
             for(j=i;j<n-1;j++)
      {
        if(c[i]==c[j+1])
        {
            c[i]= -1;
            c[j+1]= -1;
            s++;
            break;
        }
             }}
    }
    
    printf("%d\n",s);
    return 0;
}