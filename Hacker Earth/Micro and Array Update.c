#include <stdio.h>

int main()
{
    int t,n,k,i,max=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&k);
        int a[n];
        for(i=0;i<n;i++)
        {    scanf("%d",&a[i]);
             if(a[i]<k)
             {if((k-a[i])>max)
             {max=k-a[i];}}
        }
        printf("%d\n",max);
        max=0;
    }
    return 0;
}
