#include <stdio.h>

int main(){
    for(int i=0;i<15;i++){
        if(i==5){
            // break;//exit the loop
            continue;//skip this iteration
        }
        printf("i is %d\n",i);
    }
    printf("for loop is done");
    return 0;
}