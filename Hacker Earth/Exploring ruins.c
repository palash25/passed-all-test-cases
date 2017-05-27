#include <stdio.h>

int main()
{
    char s[50];
    scanf("%s",&s);
    register int i;
    register int l = strlen(s);
    for(i=0;i<l;i++)
    if(s[i]=='?')
    {
        if(s[i+1]=='a'||s[i-1]=='a')
        s[i]='b';
        else
        s[i]='a';
    }

    printf("%s\n",s);
    return 0;
}
