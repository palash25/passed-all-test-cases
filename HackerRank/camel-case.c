#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int n=0;
    int i;
    for(i=0;i<strlen(s);i++)
        {
        if(s[i]>=65&&s[i]<=90)
            n++;
        
    }
    printf("%d\n",n+1);
    return 0;
}