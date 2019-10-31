#include <stdio.h>
#include <stdlib.h>
int main(){
    int x;
    int as=0;
    scanf("%d",&x);
    printf("%d",parity_check(x));
    printf("\n");
    return 0;
}
int parity_check(int x){
int store=0;
int val=1;
int ans=0;
int count=0;
    while(x>0){
        store=x%2;
        x=x/2;
        if(store==1){
            count++;
        }
    }
    if(count%2==0){
        return 0;
    }
    else{
        return 1;
    }
}

