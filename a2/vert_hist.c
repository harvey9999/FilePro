#include <stdio.h>
#include <ctype.h>

int main()
{  
   int i = 0;
   int max=0;
   int size=26;
   char str[10000];
   char s[10000];
   char a[]="abcdefghijklmnopqrstuvwxyz";
   int f[26];
   scanf("%[^\n]%*c", str);
   while( str[i] ) {
      s[i]=tolower(str[i]);
      i++;
   }
   i=0;
   while(s[i]){
    for (int j = 0; j < size; j++) 
    { 
       if(s[i]==a[j]){
            f[j]+=1;
            if(max<f[j]){
               max=f[j];
            }
       }
   }
   i++; 
}
int cmax=max;
for(i=0; i<cmax; i++){
   for(int j=0; j<size;j++){
      if(f[j]<max){
         printf(" ");
      }
      else{
         printf("*");
      }
   }
   max--;
   printf("\n");
   }
printf("abcdefghijklmnopqrstuvwxyz\n");
  return 0;
}