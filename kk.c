#include <stdio.h>
#include<string.h>
int main()
{
 char s[100],r[100];
 int len,i,j;
 scanf("%s",&s);
 len=strlen(s);
 j=0;
 for(i=len-1;i>=0;i--)
 {
     r[j]=s[i];
     j++;
 }
 printf("%s",r);
 
    return 0;
}
