#include<stdio.h>
#include<math.h>
#define MOD 10
typedef unsigned long long int ll;
ll fast_exp(int base, int exp) {
    int res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%MOD;
       base=(base*base)%MOD;
       exp/=2;
    }
    return res%MOD;
}
int main(void){
    int a,t,l;
    unsigned long long int b;
    scanf("%d",&t);
    while(t--){
        scanf("%d %llu",&a,&b);
        l = fast_exp(a,b);
        printf("%d\n",l);
    }
}
