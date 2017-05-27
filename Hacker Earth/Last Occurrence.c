#include <stdio.h>

int main()
{
    int n,m,i,pos;
    scanf("%d%d",&n,&m);
    int a[n];
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    	if(a[i]==m)
    	pos = i+1;
    }
    printf("%d",pos);
    return 0;
}
