#include<stdio.h>
int main(){
register int i,j;
int t,n,s=0,zigzag=0;
scanf("%d\n",&t);
    while(t--){
    scanf("%d\n",&n);
    int a[2][n];
    for(i=0;i<2;i++){
        for(j=0;j<n;j++){
            scanf("%d ",&a[i][j]);
            s+=a[i][j];
        }}
 
    for(i=0;i<2;i++){
        for(j=i;j<n;j+=2){
            zigzag += a[i][j];
        }}
 
    s-=zigzag;
    if(zigzag<s)
    printf("%d\n",zigzag);
    else
    printf("%d\n",s);
 
    s=0; zigzag=0;
    }
return 0;
}