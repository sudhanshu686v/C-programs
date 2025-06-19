/*prg to print multiplication table of given no. n in 
reverse order*/
#include <stdio.h>

int main(){
    int n;
    printf("enter the no. ");
    scanf("%d",&n);

    for (int i = 10; i; i--)
    {
        printf("%d\n",i*n);
    }
    
    return 0;
}