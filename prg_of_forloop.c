//prg  to print first n natural no. by using for loop

#include <stdio.h>

int main(){
    int i,n;
    printf("enter ther no. of natural numbers :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",i);
    }
    
    return 0;
}