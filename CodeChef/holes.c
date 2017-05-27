#include<stdio.h>
int main()
{
int t,c=0,i;
char s[100];
scanf("%d\n",&t);
while(t--)
{
gets(s);
for(i=0;i<strlen(s);i++)
{
if(s[i]=='B')
c+=2;
if(s[i]=='A' || s[i]=='D' || s[i]=='O' || s[i]=='P' || s[i]=='Q' || s[i]=='R')
c++;
}
printf("%d\n",c);
c=0;
}
return 0;
}  