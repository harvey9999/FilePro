#include <stdio.h>
#include <ctype.h>

int main()
{  
   int i = 0;
   char str[10000];
   char s[10000];
   char a[]="abcdefghijklmnopqrstuvwxyz";
   int f[26];
   scanf("%[^\n]%*c", str);
   while( str[i] ) {
      s[i]=tolower(str[i]);
      i++;
   }
int i=0;

}