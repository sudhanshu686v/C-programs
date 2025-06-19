#include <stdio.h>

int main(){
    int fact=1,n=5;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("factorail of n is %d",fact);
    return 0;
}