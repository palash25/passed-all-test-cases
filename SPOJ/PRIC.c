//FERMAT'S PRIMALITY TEST

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MOD 2147483648

//calculating modulo using exponential squaring technique
long long expMod(long long base, long long exp, long long c) {
long long res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%c;
       base=(base*base)%c;
       exp/=2;
    }
    return res%c;
}

//function to run fermat's test
bool fermatTest(long int p, int k) {
  int i;

  if (p==1)
    return false;

  for (i=0; i<k; i++) {
    long long a = rand() % (p - 1) + 1;
    if (expMod(a, p - 1, p) != 1) {
      return false;
    }
  }

  return true;
}

/* driver function taking number to be tested
and number of iterations as inputs */
int main(void) {
  long int p = 1;
  long int i = 333333;
  while(i>0){
  if (fermatTest(p,100) == true)
    {printf("1");}
  else
    {printf("0");}

    p = (p+1234567890)%MOD;
    i--;
  }
  return 0;
}
