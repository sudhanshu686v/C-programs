/* Write a programme to print natural numbers from 10 to 20
 while initial loop counter is initialised to zero
*/
#include <stdio.h>

int main(){
    int i=0;
    while(i<=20){
        if(i>=10){
        printf("%d\t",i);
        }
        i++;
    }
    return 0;
}