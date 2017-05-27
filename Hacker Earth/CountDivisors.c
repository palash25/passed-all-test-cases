#include <stdio.h>

int main()
{
    int l,r,k;
    int c = 0;
    scanf("%d%d%d",&l,&r,&k);
    while(l<=r)
    {
        if(l%k==0)
        c++;
        l++;
    }
    printf("%d\n",c);
    return 0;
}
