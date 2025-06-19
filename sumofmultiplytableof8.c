/*sum of first 10 numbers in multiplication table of 8*/
#include <stdio.h>

int main(){
    int sum=0,table=1;
    for(int i=1;i<=10;i++){
        table=8*i;
        sum+=table;
    }
    printf("sum of numbers  in the mutiply table of 8 is %d",sum);
    return 0;
}