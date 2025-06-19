/*programme to sum first ten natural number using while 
loop*/
#include <stdio.h>

int main(){
    int i=1,sum=0;
    while(i<=10){
        sum=sum+i;
        i++;

    }
    printf("the sum of first ten natural no. is %d",sum);

    return 0;
}