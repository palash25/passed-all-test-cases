#include <stdio.h>
void inputInts(int *a);
int main(void) {

    int n,k,t;
    int s=0;
    inputInts(&n);
    inputInts(&k);
    while(n--){
    	inputInts(&t);
    	if(t%k==0)
    	s+=1;
    }
    printf("%d\n",s);
	return 0;
}

inline void inputInts(int *a)
{
    register char c=0;
    while (c<33) c=getchar_unlocked();
    *a=0;
    while (c>33)
    {
        *a=*a*10+c-'0';
        c=getchar_unlocked();
    }
}
