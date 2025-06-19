#include <stdio.h>

int main(){
    int i=0,n;
    printf("enter no. of natural numbers needed :");
    scanf("%d",&n);
    do{
        i++;
        printf("%d\n",i);
    } while (i<n);
    
    return 0;
}